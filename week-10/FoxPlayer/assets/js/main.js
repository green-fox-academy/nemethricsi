const tracks = document.querySelectorAll('.track-item');
tracks.forEach(element => {
  element.addEventListener('click', e => {
    // TODO: play that title / track
    console.log(e.target.childNodes[1].textContent);
  });
});

// const defaultPlaylists = document.querySelectorAll('.default');
// defaultPlaylists.forEach(element => {
//   element.addEventListener('click', e => {
//     // TODO: list that playlist in tracklist
//     console.log(e.target.dataset.id);
//   });
// });

const allPlaylists = document.querySelector('.playlists');
allPlaylists.addEventListener('click', e => {
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
            .then(() => e.target.parentElement.parentElement.remove());
        } else {
          console.log('Nope');
        }
      }
    });
  } else {
    // TODO: list all tracks on the right side 
    const playlistID = e.target.dataset.id;
    if (playlistID === '0') {
      console.log(playlistID);
    } else if (playlistID === '1') {
      console.log(playlistID);
    } else {
      console.log(playlistID);
    }
  }
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
          .then(res => res.json())
          .then(resp => resp.created ? createdPlaylist(resp.playlist, resp.playlist_id) : duplicateMessage(resp.error));
      }
    }
  });
});

const createdPlaylist = (name, id) => {
  vex.dialog.alert(`Playlist \'${name}\' was created! Let's add some songs to it!`);
  addPlaylistToDOM(name, id);
}

const duplicateMessage = (error) => {
  vex.dialog.alert(`Error: \'${error}\'`);
}

const playlistsConatainer = document.querySelector('.playlists');
const addPlaylistToDOM = (name, id) => {
  const custom = document.createElement('div');
  custom.classList.add('custom');
  custom.classList.add('playlist-item');
  custom.setAttribute('data-id', id)
  const title = document.createElement('p');
  title.classList.add('custom-playlist-title');
  title.textContent = name;
  custom.appendChild(title);
  const span = document.createElement('span');
  span.setAttribute('title', 'Delete playlist');
  const icon = document.createElement('i');
  icon.classList.add('fas');
  icon.classList.add('fa-trash-alt');
  span.appendChild(icon);
  custom.appendChild(span);
  playlistsConatainer.appendChild(custom);
}

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