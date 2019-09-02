const promise = new Promise(function (fulfill, reject) {
  // Your solution here
  setTimeout(() => {
    throw new Error('REJECTED!');
  }, 300);
});

function onReject(error) {
  // Your solution here
  console.log(error);
}

// Your solution here
promise.catch(err => console.log(err));