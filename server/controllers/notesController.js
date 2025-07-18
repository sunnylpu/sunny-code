const Note = require('../models/Note');

exports.createNote = async (req, res) => {
  try {
    const { title, content, tags, isPublic } = req.body;
    const note = new Note({
      title,
      content,
      tags,
      isPublic,
      user: req.user.id,
    });
    await note.save();
    res.status(201).json(note);
  } catch (err) {
    res.status(500).json({ message: 'Server error' });
  }
};

exports.getNotes = async (req, res) => {
  try {
    const { search, tag } = req.query;
    let query = { user: req.user.id };
    if (search) query.$or = [
      { title: { $regex: search, $options: 'i' } },
      { content: { $regex: search, $options: 'i' } }
    ];
    if (tag) query.tags = tag;
    const notes = await Note.find(query).sort({ updatedAt: -1 });
    res.json(notes);
  } catch (err) {
    res.status(500).json({ message: 'Server error' });
  }
};

exports.getNote = async (req, res) => {
  try {
    const note = await Note.findById(req.params.id);
    if (!note) return res.status(404).json({ message: 'Note not found' });
    if (note.user.toString() !== req.user.id && !note.isPublic) {
      return res.status(403).json({ message: 'Unauthorized' });
    }
    res.json(note);
  } catch (err) {
    res.status(500).json({ message: 'Server error' });
  }
};

exports.updateNote = async (req, res) => {
  try {
    const note = await Note.findById(req.params.id);
    if (!note) return res.status(404).json({ message: 'Note not found' });
    if (note.user.toString() !== req.user.id) {
      return res.status(403).json({ message: 'Unauthorized' });
    }
    const { title, content, tags, isPublic } = req.body;
    note.title = title;
    note.content = content;
    note.tags = tags;
    note.isPublic = isPublic;
    await note.save();
    res.json(note);
  } catch (err) {
    res.status(500).json({ message: 'Server error' });
  }
};

exports.deleteNote = async (req, res) => {
  try {
    const note = await Note.findById(req.params.id);
    if (!note) return res.status(404).json({ message: 'Note not found' });
    if (note.user.toString() !== req.user.id) {
      return res.status(403).json({ message: 'Unauthorized' });
    }
    await note.remove();
    res.json({ message: 'Note deleted' });
  } catch (err) {
    res.status(500).json({ message: 'Server error' });
  }
};

exports.getPublicNotes = async (req, res) => {
  try {
    const { search, tag } = req.query;
    let query = { isPublic: true };
    if (search) query.$or = [
      { title: { $regex: search, $options: 'i' } },
      { content: { $regex: search, $options: 'i' } }
    ];
    if (tag) query.tags = tag;
    const notes = await Note.find(query).sort({ updatedAt: -1 });
    res.json(notes);
  } catch (err) {
    res.status(500).json({ message: 'Server error' });
  }
}; 