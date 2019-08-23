'use strict';

function sendGetRequest(url, callback) {
  const xhr = new XMLHttpRequest();
  xhr.onreadystatechange = function () {
    if (xhr.readyState === XMLHttpRequest.DONE) {
      if (xhr.status === 200) {
        callback(JSON.parse(xhr.responseText));
      }
      else {
        console.log('something went wrong');
      }
    }
  }
  xhr.open('GET', url);
  xhr.send();
}

function sendFormData(url, data) {
  form.addEventListener('submit', e => {
    e.preventDefault();
    const xhr = new XMLHttpRequest();
    xhr.onreadystatechange = () => {
      if (xhr.readyState === XMLHttpRequest.DONE) {
        if (xhr.status >= 200 && xhr.status < 300) {
          console.log('data sent!');
        } else {
          console.log('oh noes 😢');
        }
      }
    };
    xhr.open('POST', url);
    xhr.setRequestHeader('Content-Type', 'application/json');
    xhr.send(JSON.stringify(data));
    form.reset();
  });
}

const form = document.querySelector('form');
const username = document.querySelector('#user_id');

sendFormData('/account', '{ username: username.value }');