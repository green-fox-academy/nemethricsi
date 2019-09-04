'use strict';

const test = require('tape');
const request = require('supertest');
const app = require('../routes');

test('speed-o-meter w/ given parameter is ok', (t) => {
    // implement your TEST here
    request(app)
        .get('/yondu?distance=100.0&time=10.0')
        .send()
        .end((err, res) => {
            if (err) throw err;

            t.equal(res.status, 200);
            t.same(res.body, {
                distance: "100.0",
                time: "10.0",
                speed: "10.0"
            });
            t.end();
        });
});

test('speed-o-meter w/o given parameter is not ok', (t) => {
    request(app)
        .get('/yondu/yondu?distance=&time=')
});
