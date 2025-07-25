// backend/routes/authRoutes.js
const express = require('express');
const { registerUser, loginUser, logoutUser } = require('../controllers/authController');
const router = express.Router();

router.post('/register', registerUser);
router.post('/login', loginUser);
router.post('/logout', logoutUser); // Client-side token removal is primary, but can be a confirmation endpoint.

module.exports = router;