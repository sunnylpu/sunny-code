// backend/server.js
const express = require('express');
const dotenv = require('dotenv').config(); // Load environment variables
const cors = require('cors'); // For cross-origin requests
const connectDB = require('./config/db');
const authRoutes = require('./routes/authRoutes');
const noteRoutes = require('./routes/noteRoutes');

const app = express();
const PORT = process.env.PORT || 5200;

// Connect to MongoDB
connectDB();

app.use(cors({
    origin: 'http://localhost:3000', // Allow your frontend's origin
    methods: ['GET', 'POST', 'PUT', 'DELETE'], // Allowed HTTP methods
    allowedHeaders: ['Content-Type', 'Authorization'], // Allowed request headers
}));
app.use(express.json());

// Routes
app.use('/api/auth', authRoutes);
app.use('/api/notes', noteRoutes);

// Simple root route
app.get('/', (req, res) => {
    res.send('Note Taking App API is running...');
});

app.listen(PORT, () => console.log(`Server running on port ${PORT}`));