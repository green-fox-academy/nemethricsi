const express = require('express');
const app = express();

app.get('/', (req, res) => {
    // implement your METHOD here
    res.send('okk');
});

module.exports = app;
