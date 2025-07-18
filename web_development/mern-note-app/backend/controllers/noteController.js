// backend/controllers/noteController.js
const Note = require('../models/Note');
const User = require('../models/user'); // Not strictly needed here, but good practice if you expand user-related note logic

// @desc    Get all notes for authenticated user
// @route   GET /api/notes
// @access  Private
const getNotes = async (req, res) => {
    try {
        const notes = await Note.find({ user: req.user._id }).sort({ updatedAt: -1 }); // Sort by most recently updated
        res.status(200).json(notes);
    } catch (error) {
        console.error(error);
        res.status(500).json({ message: 'Server error while fetching notes' });
    }
};

// @desc    Get a single note by ID for authenticated user
// @route   GET /api/notes/:id
// @access  Private
const getNoteById = async (req, res) => {
    try {
        const note = await Note.findById(req.params.id);

        if (!note) {
            return res.status(404).json({ message: 'Note not found' });
        }

        // Ensure the note belongs to the authenticated user
        if (note.user.toString() !== req.user._id.toString()) {
            return res.status(401).json({ message: 'Not authorized to view this note' });
        }

        res.status(200).json(note);
    } catch (error) {
        console.error(error);
        if (error.kind === 'ObjectId') {
            return res.status(404).json({ message: 'Invalid Note ID' });
        }
        res.status(500).json({ message: 'Server error while fetching note' });
    }
};

// @desc    Create a new note
// @route   POST /api/notes
// @access  Private
const createNote = async (req, res) => {
    const { title, content, tags, isPublic } = req.body;

    if (!title || !content) {
        return res.status(400).json({ message: 'Please add a title and content for the note' });
    }

    try {
        const note = await Note.create({
            user: req.user._id,
            title,
            content,
            tags: Array.isArray(tags) ? tags : [], // Ensure tags is an array
            isPublic: isPublic || false,
        });
        res.status(201).json(note);
    } catch (error) {
        console.error(error);
        res.status(500).json({ message: 'Server error while creating note' });
    }
};

// @desc    Update an existing note
// @route   PUT /api/notes/:id
// @access  Private
const updateNote = async (req, res) => {
    const { title, content, tags, isPublic } = req.body;

    try {
        const note = await Note.findById(req.params.id);

        if (!note) {
            return res.status(404).json({ message: 'Note not found' });
        }

        // Ensure the note belongs to the authenticated user
        if (note.user.toString() !== req.user._id.toString()) {
            return res.status(401).json({ message: 'Not authorized to update this note' });
        }

        note.title = title || note.title;
        note.content = content || note.content;
        note.tags = Array.isArray(tags) ? tags : note.tags;
        note.isPublic = typeof isPublic === 'boolean' ? isPublic : note.isPublic;

        const updatedNote = await note.save();
        res.status(200).json(updatedNote);
    } catch (error) {
        console.error(error);
        if (error.kind === 'ObjectId') {
            return res.status(404).json({ message: 'Invalid Note ID' });
        }
        res.status(500).json({ message: 'Server error while updating note' });
    }
};

// @desc    Delete a note
// @route   DELETE /api/notes/:id
// @access  Private
const deleteNote = async (req, res) => {
    try {
        const note = await Note.findById(req.params.id);

        if (!note) {
            return res.status(404).json({ message: 'Note not found' });
        }

        // Ensure the note belongs to the authenticated user
        if (note.user.toString() !== req.user._id.toString()) {
            return res.status(401).json({ message: 'Not authorized to delete this note' });
        }

        await Note.deleteOne({ _id: req.params.id }); // Use deleteOne for Mongoose 6+
        res.status(200).json({ message: 'Note removed' });
    } catch (error) {
        console.error(error);
        if (error.kind === 'ObjectId') {
            return res.status(404).json({ message: 'Invalid Note ID' });
        }
        res.status(500).json({ message: 'Server error while deleting note' });
    }
};

// @desc    Get all public notes (no authentication needed)
// @route   GET /api/notes/public
// @access  Public
const getPublicNotes = async (req, res) => {
    try {
        const publicNotes = await Note.find({ isPublic: true }).sort({ createdAt: -1 }).select('-user'); // Exclude user field
        res.status(200).json(publicNotes);
    } catch (error) {
        console.error(error);
        res.status(500).json({ message: 'Server error while fetching public notes' });
    }
};

module.exports = {
    getNotes,
    getNoteById,
    createNote,
    updateNote,
    deleteNote,
    getPublicNotes,
};