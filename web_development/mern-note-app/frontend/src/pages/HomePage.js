// frontend/src/pages/HomePage.js
import React, { useEffect, useState } from 'react';
import API from '../services/api';
import NoteCard from '../components/NoteCard';
import './NotesPage.css'; // Common CSS for notes display
import { Link } from 'react-router-dom';

const HomePage = () => {
    const [notes, setNotes] = useState([]);
    const [loading, setLoading] = useState(true);
    const [error, setError] = useState('');
    const [searchTerm, setSearchTerm] = useState('');
    const [selectedTag, setSelectedTag] = useState('');
    const [allTags, setAllTags] = useState([]);

    useEffect(() => {
        const fetchNotes = async () => {
            try {
                const response = await API.get('/notes');
                setNotes(response.data);
                extractAllTags(response.data);
                setLoading(false);
            } catch (err) {
                setError('Failed to fetch notes. Please login or try again.');
                setLoading(false);
                console.error(err);
            }
        };
        fetchNotes();
    }, []);

    const extractAllTags = (notesData) => {
        const tags = new Set();
        notesData.forEach(note => {
            note.tags.forEach(tag => tags.add(tag));
        });
        setAllTags(Array.from(tags));
    };

    const filteredNotes = notes.filter(note => {
        const matchesSearchTerm = note.title.toLowerCase().includes(searchTerm.toLowerCase()) ||
                                  note.content.toLowerCase().includes(searchTerm.toLowerCase());
        const matchesTag = selectedTag ? note.tags.includes(selectedTag) : true;
        return matchesSearchTerm && matchesTag;
    });

    if (loading) return <div className="container">Loading notes...</div>;
    if (error) return <div className="container error-message">{error}</div>;

    return (
        <div className="container notes-page">
            <div className="notes-header">
                <h2>My Notes</h2>
                <Link to="/create-note" className="button">Create New Note</Link>
            </div>

            <div className="filter-sort-section">
                <input
                    type="text"
                    placeholder="Search notes by keyword..."
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

            {filteredNotes.length === 0 ? (
                <p className="no-notes-message">
                    {notes.length === 0 ? "You don't have any notes yet. Create one!" : "No notes match your search/filter criteria."}
                </p>
            ) : (
                <div className="notes-grid">
                    {filteredNotes.map((note) => (
                        <NoteCard key={note._id} note={note} />
                    ))}
                </div>
            )}
        </div>
    );
};

export default HomePage;