// frontend/src/pages/NoteDetailPage.js
import React, { useEffect, useState } from 'react';
import { useParams, useNavigate, Link } from 'react-router-dom';
import API from '../services/api';
import './NoteDetailPage.css'; // Create this CSS file

const NoteDetailPage = () => {
    const { id } = useParams();
    const navigate = useNavigate();
    const [note, setNote] = useState(null);
    const [loading, setLoading] = useState(true);
    const [error, setError] = useState('');

    useEffect(() => {
        const fetchNote = async () => {
            try {
                const response = await API.get(`/notes/${id}`);
                setNote(response.data);
                setLoading(false);
            } catch (err) {
                setError('Failed to fetch note or you do not have permission.');
                setLoading(false);
                console.error(err);
            }
        };
        fetchNote();
    }, [id]);

    const handleDelete = async () => {
        if (window.confirm('Are you sure you want to delete this note?')) {
            try {
                await API.delete(`/notes/${id}`);
                navigate('/notes'); // Redirect to notes list after deletion
            } catch (err) {
                setError('Failed to delete note.');
                console.error(err);
            }
        }
    };

    if (loading) return <div className="container">Loading note...</div>;
    if (error) return <div className="container error-message">{error}</div>;
    if (!note) return <div className="container">Note not found.</div>;

    return (
        <div className="container note-detail-page">
            <div className="note-detail-header">
                <h2>{note.title}</h2>
                <div className="note-actions">
                    <Link to={`/edit-note/${note._id}`} className="button secondary">Edit</Link>
                    <button onClick={handleDelete} className="button delete-button">Delete</button>
                </div>
            </div>
            <p className="note-detail-content">{note.content}</p>
            <div className="note-detail-tags">
                {note.tags && note.tags.map((tag, index) => (
                    <span key={index} className="note-tag">{tag}</span>
                ))}
            </div>
            {note.isPublic && <span className="public-badge-detail">Public Note</span>}
            <p className="note-timestamps">
                Created: {new Date(note.createdAt).toLocaleString()} <br />
                Last Updated: {new Date(note.updatedAt).toLocaleString()}
            </p>
            <Link to="/notes" className="button back-button">Back to My Notes</Link>
        </div>
    );
};

export default NoteDetailPage;