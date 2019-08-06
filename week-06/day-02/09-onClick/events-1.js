// Turn the party on and off by clicking the button. (the whole page)

let button = document.querySelector('button');
button.onclick = () => {
  document.querySelector('div').classList.toggle('party');
};
