const express = require('express');
const app = express();

app.get('/yondu', (req, res) => {
    // implement your METHOD here
    const distance = req.query.distance;
    const time = req.query.time;
    res.send({
        distance: Number(distance).toFixed(1),
        time: Number(time).toFixed(1),
        speed: (distance / time).toFixed(1)
    });
});

module.exports = app;
