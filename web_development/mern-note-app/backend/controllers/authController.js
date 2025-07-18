// backend/controllers/authController.js
const User = require('../models/user');
const jwt = require('jsonwebtoken');
const bcrypt = require('bcryptjs');

// Helper function to generate JWT
const generateToken = (id) => {
    return jwt.sign({ id }, process.env.JWT_SECRET, {
        expiresIn: '1h', // Token expires in 1 hour
    });
};

// @desc    Register a new user
// @route   POST /api/auth/register
// @access  Public
const registerUser = async (req, res) => {
    console.log('Register request received!'); // <-- ADD THIS
    console.log('Request Body:', req.body);    // <-- ADD THIS

    const { username, email, password } = req.body;

    if (!username || !email || !password) {
        console.log('Missing fields:', { username, email, password }); // <-- ADD THIS
        return res.status(400).json({ message: 'Please enter all fields' });
    }

    // Check if user exists
    const userExists = await User.findOne({ $or: [{ username }, { email }] });
    if (userExists) {
        console.log('User already exists:', userExists.email); // <-- ADD THIS
        return res.status(400).json({ message: 'User already exists' });
    }

    try {
        const user = await User.create({ username, email, password });
        console.log('User registered successfully:', user.email); // <-- ADD THIS
        res.status(201).json({
            _id: user._id,
            username: user.username,
            email: user.email,
            token: generateToken(user._id),
        });
    } catch (error) {
        console.error('Error during user creation/registration:', error); // <-- ADD THIS
        res.status(500).json({ message: 'Server error during registration' });
    }
};

// ... rest of the file

// @desc    Authenticate user & get token
// @route   POST /api/auth/login
// @access  Public
const loginUser = async (req, res) => {
    const { email, password } = req.body;

    // Check for user email
    const user = await User.findOne({ email });

    if (user && (await user.matchPassword(password))) {
        res.json({
            _id: user._id,
            username: user.username,
            email: user.email,
            token: generateToken(user._id),
        });
    } else {
        res.status(401).json({ message: 'Invalid credentials' });
    }
};

// @desc    User logout (handled client-side by removing token)
// @route   GET /api/auth/logout (optional, typically client-side)
// @access  Private (though not strictly necessary on backend)
const logoutUser = (req, res) => {
    // For JWT, logout is primarily handled by the client removing the token.
    // We can send a success message.
    res.json({ message: 'User logged out successfully (token removed client-side)' });
};

module.exports = {
    registerUser,
    loginUser,
    logoutUser,
};