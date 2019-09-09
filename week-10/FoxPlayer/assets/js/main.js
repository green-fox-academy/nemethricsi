const tracks = document.querySelectorAll('.track-item');
tracks.forEach(element => {
  element.addEventListener('click', e => {
    console.log(e.target.childNodes[1].textContent);
  });
});

const defaultPlaylists = document.querySelectorAll('.default');
defaultPlaylists.forEach(element => {
  element.addEventListener('click', e => {
    // list that playlist in tracklist
    console.log(e.target.childNodes[0].textContent);
  });
});

const customPlaylists = document.querySelectorAll('.custom');
customPlaylists.forEach(element => {
  element.addEventListener('click', e => {
    // list that playlist in tracklist
    console.log('megnyitja a playlistet');
    console.log(e.target.childNodes[1].textContent);
  });
});

const closePlaylist = document.querySelector('.fa-times');
closePlaylist.addEventListener('click', () => {
  console.log('ez majd bezárja a playlistet');
});