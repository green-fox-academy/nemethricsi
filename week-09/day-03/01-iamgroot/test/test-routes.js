'use strict';

const test = require('tape');
const request = require('supertest');
const app = require('../routes');

// TEST IF /GROOT ENDPOINT WORKS WITH GIVEN PARAMETER:
test('groot endpoint - w/ given parameter', (t) => {
  request(app)
    .get('/groot?message=someMessage')
    .send()
    .end((err, res) => {
      if (err) throw err;

      // With giving a parameter the status is ok
      t.equal(res.status, 200);
      // the given response is the same as expected
      t.same(res.body, { received: 'someMessage', translated: 'I am Groot!' });
      t.end();
    });
});

// TEST IF /GROOT ENDPOINT GIVES ERROR WITHOUT GIVEN PARAMETER:
test('groot endpoint - w/o given parameter', (t) => {
  request(app)
    .get('/groot?message=')
    .send()
    .end((err, res) => {
      if (err) throw err;

      // With giving a parameter the status is NOT ok
      t.equal(res.status, 400);
      // the given response is the same as expected
      t.same(res.body, { error: 'I am Groot!' });
      t.end();
    });
});