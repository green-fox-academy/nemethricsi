// 1)  Fill every paragraph with the last one's content.

let everyP = document.querySelectorAll('p');
for (let i = 0; i < everyP.length; i++) {
  everyP[i].textContent = everyP[everyP.length - 1].textContent;
}

// 2)  Do the same again, but you should keep the cat strong.

let everyP2 = document.querySelectorAll('p');
for (let i = 0; i < everyP2.length; i++) {
  everyP2[i].innerHTML = everyP2[everyP2.length - 1].innerHTML;
}

// everyP2.forEach() ???
