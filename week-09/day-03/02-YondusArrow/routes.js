const express = require('express');
const app = express();

app.get('/yondu', (req, res) => {
    const distance = req.query.distance;
    const time = req.query.time;
    if (time > 0) {
        res.send({
            distance: Number(distance).toFixed(1),
            time: Number(time).toFixed(1),
            speed: (distance / time).toFixed(1)
        });
    } else {
        res.status(400).send({ error: 'time have to be bigger than 0' });
    }

});

module.exports = app;
