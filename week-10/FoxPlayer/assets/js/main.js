const tracks = document.querySelectorAll('.track-item');
tracks.forEach(element => {
  element.addEventListener('click', e => {
    //play that title / track
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
    console.log(e.target.childNodes[1].textContent);
  });
});

const deletePlaylist = document.querySelector('.fa-times');
deletePlaylist.addEventListener('click', () => {
  let deletePlaylist = confirm('Are you sure?'); //true or false
  if (deletePlaylist === false) {
    console.log('this wont delete your playlist');
    return;
  } else {
    //delete playlist
  }
  console.log('this should delete the playlist');
});

const createPlaylistButton = document.querySelector('#create-playlist');
createPlaylistButton.addEventListener('click', () => {
  const newPlaylist = prompt('Type your playlist name below');
  console.log(newPlaylist);
  // create a new playlist in the database and refresh playlists or create new element in the DOM
});