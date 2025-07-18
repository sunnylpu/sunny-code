// frontend/src/components/NoteCard.js
import React from 'react';
import { Link } from 'react-router-dom';
import './NoteCard.css'; // Create this CSS file

const NoteCard = ({ note }) => {
    const truncateContent = (content, limit = 150) => {
        if (content.length <= limit) return content;
        return content.substring(0, limit) + '...';
    };

    return (
        <div className="note-card">
            <Link to={`/notes/${note._id}`} className="note-card-link">
                <h3>{note.title}</h3>
                <p>{truncateContent(note.content)}</p>
                <div className="note-tags">
                    {note.tags && note.tags.map((tag, index) => (
                        <span key={index} className="note-tag">{tag}</span>
                    ))}
                </div>
                {note.isPublic && <span className="public-badge">Public</span>}
            </Link>
        </div>
    );
};

export default NoteCard;