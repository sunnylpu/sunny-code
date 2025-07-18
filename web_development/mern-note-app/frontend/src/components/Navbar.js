// frontend/src/components/Navbar.js
import React from 'react';
import { Link, useNavigate } from 'react-router-dom';
import { useAuth } from '../contexts/AuthContext';
import { useTheme } from '../contexts/ThemeContext';
import './Navbar.css'; // Create this CSS file

const Navbar = () => {
    const { isAuthenticated, user, logout } = useAuth();
    const { theme, toggleTheme } = useTheme();
    const navigate = useNavigate();

    const handleLogout = () => {
        logout();
        navigate('/login');
    };

    return (
        <nav className="navbar">
            <div className="navbar-container">
                <Link to="/" className="navbar-logo">
                    Note App
                </Link>
                <div className="navbar-links">
                    <Link to="/public-notes" className="nav-item">Public Notes</Link>
                    {isAuthenticated && (
                        <>
                            <Link to="/notes" className="nav-item">My Notes</Link>
                            <Link to="/create-note" className="nav-item">Create Note</Link>
                            <span className="nav-item user-info">Hello, {user?.username}</span>
                            <button onClick={handleLogout} className="button secondary">Logout</button>
                        </>
                    )}
                    {!isAuthenticated && (
                        <>
                            <Link to="/login" className="nav-item">Login</Link>
                            <Link to="/register" className="nav-item">Register</Link>
                        </>
                    )}
                    <button onClick={toggleTheme} className="theme-toggle-button">
                        {theme === 'light' ? '🌙' : '☀️'}
                    </button>
                </div>
            </div>
        </nav>
    );
};

export default Navbar;