// frontend/src/App.js
import React from 'react';
import { BrowserRouter as Router, Routes, Route, Navigate } from 'react-router-dom';
import { useAuth } from './contexts/AuthContext';
import Navbar from './components/Navbar';
import RegisterPage from './pages/RegisterPage';
import LoginPage from './pages/LoginPage';
import HomePage from './pages/HomePage'; // My notes page
import NoteDetailPage from './pages/NoteDetailPage';
import NoteFormPage from './pages/NoteFormPage'; // For create and edit
import PublicNotesPage from './pages/PublicNotesPage';

// A private route component
const PrivateRoute = ({ children }) => {
    const { isAuthenticated, loading } = useAuth();

    if (loading) {
        return <div style={{ textAlign: 'center', marginTop: '50px', fontSize: '1.2rem' }}>Loading application...</div>;
    }

    return isAuthenticated ? children : <Navigate to="/login" replace />;
};

function App() {
    return (
        <Router>
            <Navbar />
            <Routes>
                {/* Public Routes */}
                <Route path="/register" element={<RegisterPage />} />
                <Route path="/login" element={<LoginPage />} />
                <Route path="/public-notes" element={<PublicNotesPage />} />
                <Route path="/" element={<Navigate to="/notes" replace />} /> {/* Default redirect */}

                {/* Protected Routes */}
                <Route path="/notes" element={<PrivateRoute><HomePage /></PrivateRoute>} />
                <Route path="/notes/:id" element={<PrivateRoute><NoteDetailPage /></PrivateRoute>} />
                <Route path="/create-note" element={<PrivateRoute><NoteFormPage /></PrivateRoute>} />
                <Route path="/edit-note/:id" element={<PrivateRoute><NoteFormPage /></PrivateRoute>} />

                {/* Fallback for unknown routes (optional) */}
                <Route path="*" element={<div className="container" style={{ textAlign: 'center', marginTop: '50px' }}>404 - Page Not Found</div>} />
            </Routes>
        </Router>
    );
}

export default App;