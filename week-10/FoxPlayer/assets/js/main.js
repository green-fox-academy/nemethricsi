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
  vex.dialog.confirm({
    message: 'Are you absolutely sure you want to delete the playlist?',
    callback: function (value) {
      if (value) {
        console.log('Playlist deleted')
      } else {
        console.log('Nope')
      }
    }
  })
});

const createPlaylistButton = document.querySelector('#create-playlist');
createPlaylistButton.addEventListener('click', () => {
  vex.dialog.prompt({
    message: 'Type your playlist name below',
    placeholder: 'Playlist name',
    callback: function (value) {
      console.log(value)
      vex.dialog.alert(`Playlist ${value} was created! Let's add some songs!`);
      // create a new playlist in the database and refresh playlists or create new element in the DOM
    }
  });
});