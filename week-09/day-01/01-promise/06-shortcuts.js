// .catch

promise.catch(function (err) {
  console.error('THERE IS AN ERROR!!!');
  console.error(err.message);
});

// Promise.resolve

const promise = new Promise(function (fulfill, reject) {
  fulfill('SECRET VALUE');
});

const promise = Promise.resolve('SECRET VALUE');

// Promise.reject

const promise = new Promise(function (fulfill, reject) {
  reject(new Error('SECRET VALUE'));
});

const promise = Promise.reject(new Error('SECRET VALUE'));