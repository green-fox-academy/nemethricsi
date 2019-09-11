const tracks = document.querySelectorAll('.track-item');
tracks.forEach(element => {
  element.addEventListener('click', e => {
    // TODO: play that title / track
    console.log(e.target.childNodes[1].textContent);
  });
});

const defaultPlaylists = document.querySelectorAll('.default');
defaultPlaylists.forEach(element => {
  element.addEventListener('click', e => {
    // TODO: list that playlist in tracklist
    console.log(e.target.dataset.id);
  });
});

const customPlaylists = document.querySelectorAll('.custom');
customPlaylists.forEach(element => {
  element.addEventListener('click', e => {
    if (e.target.className === 'fas fa-trash-alt' || e.target.className === '') {
      vex.dialog.confirm({
        message: 'Are you absolutely sure you want to delete the playlist?',
        callback: function (value) {
          if (value) {
            console.log('Playlist deleted')
            const playlistToBeDeleted = e.target.parentElement.previousElementSibling.textContent;
            fetch('/playlists', {
              method: 'DELETE',
              headers: { 'Content-Type': 'application/json' },
              body: JSON.stringify({ playlist: playlistToBeDeleted })
            })
              // .then(res => res.text()) - only if you wait resp from backend
              .then(_ => element.remove());
          } else {
            console.log('Nope');
          }
        }
      });
    } else {
      console.log(e.target.childNodes[1].dataset.id);
      // TODO: list all tracks on the right side 
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
        return console.log('Playlist creation cancelled');
      } else {
        console.log(value)
        fetch('/playlists', {
          method: 'POST',
          headers: { 'Content-Type': 'application/json', 'Accept': 'application/json' },
          body: JSON.stringify({ newPlaylist: value })
        })
          // .then(_ => customPlaylists[0].appendChild())
          .then(_ =>
            vex.dialog.alert(`Playlist \'${value}\' was created! Let's add some songs to it!`))
          .then(_ => location.reload());

        // TODO: create a new playlist in the database and refresh playlists or create new element in the DO
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