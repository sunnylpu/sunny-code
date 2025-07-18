// frontend/src/pages/NoteFormPage.js
import React, { useState, useEffect } from 'react';
import { useNavigate, useParams } from 'react-router-dom';
import API from '../services/api';
import './NoteFormPage.css'; // Create this CSS file

const NoteFormPage = () => {
    const { id } = useParams(); // 'id' will be present if editing
    const navigate = useNavigate();
    const [title, setTitle] = useState('');
    const [content, setContent] = useState('');
    const [tags, setTags] = useState(''); // Comma-separated string for input
    const [isPublic, setIsPublic] = useState(false);
    const [error, setError] = useState('');
    const [loading, setLoading] = useState(false);

    const isEditing = !!id; // True if 'id' exists

    useEffect(() => {
        if (isEditing) {
            setLoading(true);
            const fetchNote = async () => {
                try {
                    const response = await API.get(`/notes/${id}`);
                    const note = response.data;
                    setTitle(note.title);
                    setContent(note.content);
                    setTags(note.tags.join(', ')); // Convert array to comma-separated string
                    setIsPublic(note.isPublic);
                    setLoading(false);
                } catch (err) {
                    setError('Failed to load note for editing.');
                    setLoading(false);
                    console.error(err);
                }
            };
            fetchNote();
        }
    }, [id, isEditing]);

    const handleSubmit = async (e) => {
        e.preventDefault();
        setError('');
        setLoading(true);

        const noteData = {
            title,
            content,
            tags: tags.split(',').map(tag => tag.trim()).filter(tag => tag), // Convert string to array
            isPublic,
        };

        try {
            if (isEditing) {
                await API.put(`/notes/${id}`, noteData);
                navigate(`/notes/${id}`); // Go back to the detailed note view
            } else {
                const response = await API.post('/notes', noteData);
                navigate(`/notes/${response.data._id}`); // Go to the new note's detailed view
            }
        } catch (err) {
            setError(err.response?.data?.message || 'An error occurred. Please try again.');
            console.error(err);
        } finally {
            setLoading(false);
        }
    };

    if (loading && isEditing) return <div className="container">Loading note for editing...</div>;
    if (error && isEditing) return <div className="container error-message">{error}</div>;

    return (
        <div className="container note-form-page">
            <form onSubmit={handleSubmit} className="note-form">
                <h2>{isEditing ? 'Edit Note' : 'Create New Note'}</h2>
                {error && <p className="error-message">{error}</p>}
                <div className="form-group">
                    <label htmlFor="title">Title</label>
                    <input
                        type="text"
                        id="title"
                        value={title}
                        onChange={(e) => setTitle(e.target.value)}
                        required
                        placeholder="Enter note title"
                    />
                </div>
                <div className="form-group">
                    <label htmlFor="content">Content</label>
                    <textarea
                        id="content"
                        value={content}
                        onChange={(e) => setContent(e.target.value)}
                        required
                        placeholder="Start writing your note here..."
                    ></textarea>
                </div>
                <div className="form-group">
                    <label htmlFor="tags">Tags (comma-separated)</label>
                    <input
                        type="text"
                        id="tags"
                        value={tags}
                        onChange={(e) => setTags(e.target.value)}
                        placeholder="e.g., work, personal, ideas"
                    />
                </div>
                <div className="form-group checkbox-group">
                    <input
                        type="checkbox"
                        id="isPublic"
                        checked={isPublic}
                        onChange={(e) => setIsPublic(e.target.checked)}
                    />
                    <label htmlFor="isPublic">Make Public (Anyone can view)</label>
                </div>
                <button type="submit" className="button" disabled={loading}>
                    {loading ? (isEditing ? 'Updating...' : 'Creating...') : (isEditing ? 'Update Note' : 'Create Note')}
                </button>
            </form>
        </div>
    );
};

export default NoteFormPage;