// backend/routes/noteRoutes.js
const express = require('express');
const {
    getNotes,
    getNoteById,
    createNote,
    updateNote,
    deleteNote,
    getPublicNotes,
} = require('../controllers/noteController');
const { protect } = require('../middleware/authmiddleware');
const router = express.Router();

// Public route for viewing public notes
router.get('/public', getPublicNotes);

// Protected routes (require authentication)
router.route('/').get(protect, getNotes).post(protect, createNote);
router.route('/:id').get(protect, getNoteById).put(protect, updateNote).delete(protect, deleteNote);

module.exports = router;