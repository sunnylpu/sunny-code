// frontend/src/pages/PublicNotesPage.js
import React, { useEffect, useState } from 'react';
import API from '../services/api'; // Use the same API instance, but this route is public
import NoteCard from '../components/NoteCard';
import './NotesPage.css'; // Re-use common CSS for notes display

const PublicNotesPage = () => {
    const [publicNotes, setPublicNotes] = useState([]);
    const [loading, setLoading] = useState(true);
    const [error, setError] = useState('');
    const [searchTerm, setSearchTerm] = useState('');
    const [selectedTag, setSelectedTag] = useState('');
    const [allTags, setAllTags] = useState([]);

    useEffect(() => {
        const fetchPublicNotes = async () => {
            try {
                // This endpoint does not require a token
                const response = await API.get('/notes/public');
                setPublicNotes(response.data);
                extractAllTags(response.data);
                setLoading(false);
            } catch (err) {
                setError('Failed to fetch public notes.');
                setLoading(false);
                console.error(err);
            }
        };
        fetchPublicNotes();
    }, []);

    const extractAllTags = (notesData) => {
        const tags = new Set();
        notesData.forEach(note => {
            note.tags.forEach(tag => tags.add(tag));
        });
        setAllTags(Array.from(tags));
    };

    const filteredPublicNotes = publicNotes.filter(note => {
        const matchesSearchTerm = note.title.toLowerCase().includes(searchTerm.toLowerCase()) ||
                                  note.content.toLowerCase().includes(searchTerm.toLowerCase());
        const matchesTag = selectedTag ? note.tags.includes(selectedTag) : true;
        return matchesSearchTerm && matchesTag;
    });

    if (loading) return <div className="container">Loading public notes...</div>;
    if (error) return <div className="container error-message">{error}</div>;

    return (
        <div className="container notes-page">
            <div className="notes-header">
                <h2>Public Notes</h2>
            </div>
            <div className="filter-sort-section">
                <input
                    type="text"
                    placeholder="Search public notes by keyword..."
                    value={searchTerm}
                    onChange={(e) => setSearchTerm(e.target.value)}
                    className="search-input"
                />
                <select
                    value={selectedTag}
                    onChange={(e) => setSelectedTag(e.target.value)}
                    className="tag-filter-select"
                >
                    <option value="">All Tags</option>
                    {allTags.map(tag => (
                        <option key={tag} value={tag}>{tag}</option>
                    ))}
                </select>
            </div>
            {filteredPublicNotes.length === 0 ? (
                <p className="no-notes-message">No public notes available or none match your criteria.</p>
            ) : (
                <div className="notes-grid">
                    {filteredPublicNotes.map((note) => (
                        // Note: For public notes, you might not want a clickable link
                        // or link to a simplified public view if there's no auth.
                        // Here, linking to detail page but it might redirect if protected.
                        // For a truly public-only view, you might not use NoteCard's Link.
                        <NoteCard key={note._id} note={note} />
                    ))}
                </div>
            )}
        </div>
    );
};

export default PublicNotesPage;