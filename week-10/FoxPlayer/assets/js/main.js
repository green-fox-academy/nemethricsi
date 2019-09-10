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
    if (e.target.className === 'fas fa-times' || e.target.className === '') {
      vex.dialog.confirm({
        message: 'Are you absolutely sure you want to delete the playlist?',
        callback: function (value) {
          if (value) {
            console.log('Playlist deleted')
            const playlistToBeDeleted = e.target.parentElement.previousElementSibling.textContent;
            // fetch('/', {
            //   method: delete
            // })
          } else {
            console.log('Nope')
          }
        }
      });
    } else {
      console.log(e.target.childNodes[1].textContent);
      // list all tracks on the right side 
    }
  });
});

const createPlaylistButton = document.querySelector('#create-playlist');
createPlaylistButton.addEventListener('click', () => {
  vex.dialog.prompt({
    message: 'Type your playlist name below',
    placeholder: 'Playlist name',
    callback: function (value) {
      if (!value) {
        return console.log('cancelled');
      } else {
        console.log(value)
        vex.dialog.alert(`Playlist \'${value}\' was created! Let's add some songs to it!`);
        // create a new playlist in the database and refresh playlists or create new element in the DO
      }
    }
  });
});

const addToPlaylist = document.querySelector('#add-to-playlist');
addToPlaylist.addEventListener('click', e => {
  fetch('custom-playlists')
    .then(res => res.json())
    .then(res => {
      const input = [
        '<select name="select" id="">',
        '<option value="">--Select a playlist--</option>'
      ];
      vex.dialog.open({
        message: 'Add current song to a playlist',
        input: input.concat(res
          .map(e => {
            return `<option value="${e.playlist}">${e.playlist}</option>`;
          })
        )
          .concat('</select>')
          .join(''),
        callback: function (data) {
          if (!data) {
            console.log('no data!');
          } else {
            console.log(data.select);
            vex.dialog.alert(`The song was added to playlist \'${data.select}\'`);
          }
        },
      })
    })
});

const addToFavourites = document.querySelector('#add-to-favourites');
addToFavourites.addEventListener('click', e => {
  // TODO: implement method for addig to Favourites
  vex.dialog.alert('TODO: Add an option to add song to Favourites!');
});