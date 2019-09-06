const mainContent = document.querySelector('main');

mainContent.innerHTML = '<h1>That works</h1>';

fetch('/api/posts')
  .then(res => res.text())
  .then(posts => mainContent.innerHTML = posts);