const star = document.getElementById('add-to-favourites');
const tracklist = document.querySelector('.tracklist');

let currentSongTitle = document.getElementById('current-song-title');
let currentArtist = document.getElementById('current-song-artist');
let currentSongInfo = document.querySelector('.song-info');

fetch('/api/tracks')
  .then(res => res.text())
  .then(tracks => tracklist.innerHTML = tracks);

tracklist.addEventListener('click', e => {
  const audioElement = document.querySelector('audio');
  audioElement.setAttribute('src', e.target.dataset.path);
  audioElement.setAttribute('autoplay', 'true');

  // change the currently playling song
  currentSongInfo.setAttribute('data-id', e.target.dataset.id);
  currentSongTitle.textContent = e.target.firstElementChild.innerText;
  currentArtist.textContent = e.target.dataset.artist;

  // check if it the song is favourite and change the color of the star accordingly
  // if (e.target.dataset.playlistid === '1') {
  //   star.style.color = '#DAA520';
  //   // star.classList.toggle('.favourited');
  //   //   console.log(e.target.dataset.playlistid);
  // } else if (e.target.dataset.playlistid !== '1') {
  //   star.style.color = '#B4B4B4'
  // }
});

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
    const playlistID = e.target.dataset.id;
    const URL = playlistID !== '0'
      ? `/playlist-tracks/${playlistID}`
      : `/api/tracks`;

    fetch(URL)
      .then(res => res.text())
      .then(tracks => tracklist.innerHTML = tracks);
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
  allPlaylists.appendChild(custom);
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
          let currentSongID = e.target.parentElement.parentElement.previousElementSibling.dataset.id;
          if (!data || currentSongID === '') {
            console.log('no song was played!');
            vex.dialog.alert(`Please play a song first!`)
          } else {
            res.forEach(e => {
              if (data.select === e.playlist) {
                const selectedPlaylistID = e.playlist_id;
                fetch(`/playlist-tracks/${selectedPlaylistID}/${currentSongID}`, {
                  method: 'PUT',
                  headers: { 'Content-Type': 'application/json', 'Accept': 'application/json' },
                })
                  .then(
                    vex.dialog.alert(`This song was added to playlist \'${e.playlist}\'`)
                  );
              }
            })
          }
        },
      })
    })
});

const addToFavourites = document.querySelector('#add-to-favourites');
addToFavourites.addEventListener('click', e => {
  // TODO: implement method for addig to Favourites

  // if the current song's playlist_id is not 1:
  if (currentSongTitle === '') {
    vex.dialog.alert(`Please play a song first!`)
  } else {
    let currentSongID = e.target.parentElement.parentElement.previousElementSibling.dataset.id;
    console.log(e.target.parentElement.parentElement.previousElementSibling.dataset.id);
    fetch(`/playlist-tracks/1/${currentSongID}`, {
      method: 'PUT',
      headers: { 'Content-Type': 'application/json', 'Accept': 'application/json' },
    })
      .then(
        vex.dialog.alert(`This song was added to your Favourites'`),
        star.style.color = '#DAA520'
      );

  }
  // Star color changes to yellow when this song is played 
  // ---> when you click on the track it validates if the song's
  // current playlist_id is 1 if it is changes the star color to yellow.

  // if star color is yellow:
  // Current track's playlist ID changes to NULL - fetch ??
  // star color changes to gray when this song is played
});