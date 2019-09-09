const tracks = document.querySelectorAll('.track-item');
tracks.forEach(element => {
  element.addEventListener('click', e => {
    if (e.target.className === 'track-duration') {
      console.log(e.path[1].childNodes[1].textContent);
    } else if (e.target.className === 'track-title') {
      console.log(e.target.textContent);
    } else if (e.target.className === 'track-item') {
      console.log(e.target.childNodes[1].textContent);
    }
  });
});

const playlists = document.querySelectorAll('.playlist-item');
playlists.forEach(element => {
  element.addEventListener('click', e => {
    console.log(e.target.textContent);
  });
});