const form = document.getElementsByTagName('form')[0];
const title = document.querySelector('#title');
const URL = document.querySelector('#url');

// form.addEventListener('submit', (e) => {
//   e.preventDefault();
//   fetch('/submit', {
//     method: 'POST',
//     headers: {
//       'Content-Type': 'application/json',
//       'Accept': 'application/json'
//     },
//     body: JSON.stringify({ 'title': title.value, 'url': URL.value }),
//   })
//     .then(res => res.json())
//     .then(res => res.send('wtf'))
//     .then(form.reset())
//     .then(res => res.redirect('/'))
// });