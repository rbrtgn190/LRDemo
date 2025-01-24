const express = require('express');
const app = express();

app.get('/', (req, res) => {
    res.sendFile(__dirname + '/index.html');
});

app.get('/headers', (req, res) => {
    res.json(req.headers);
});

app.listen(3000, () => {
    console.log('Server is running on http://localhost:3000');
});