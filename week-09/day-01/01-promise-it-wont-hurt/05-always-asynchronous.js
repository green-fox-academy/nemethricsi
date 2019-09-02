'use strict';

const promise = new Promise((resolve, reject) => {
  resolve('PROMISE VALUE');
});

promise.then(console.log, null);

console.log('MAIN PROGRAM');