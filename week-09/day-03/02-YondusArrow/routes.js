const express = require('express');
const app = express();

app.get('/yondu', (req, res) => {
    // implement your METHOD here
    const distance = req.query.distance;
    const time = req.query.time;
    res.send({
        distance: 100.0,
        time: 10.0,
        speed: distance / time
    });
});

module.exports = app;
