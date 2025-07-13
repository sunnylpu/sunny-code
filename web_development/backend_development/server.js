
const express = require('express');
const app = express();
const PORT = 5000;

// Define the root route
app.get('/', (req, res) => {
    res.send('Hello from Express!');
});

// Start the server
app.listen(PORT, () => {
    console.log(`Server running on http://localhost:${PORT}`);
});