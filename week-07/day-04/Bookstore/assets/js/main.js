'use strict';

const body = document.querySelector('body');

const xhr = new XMLHttpRequest();
xhr.onload = function() {
  const bookNames = JSON.parse(xhr.responseText);
  for (let i = 0; i < bookNames.length; i++) {
    let p = document.createElement('p');
    p.textContent = bookNames[i].book_name;
    body.appendChild(p);
  }
};
xhr.open('GET', 'http://localhost:3000/books');
xhr.send('OK!');

const xhr2 = new XMLHttpRequest();
xhr2.onload = function() {
  const booksAllData = JSON.parse(xhr2.responseText);
  let title = document.createElement('h2');
  title.textContent = 'Our Books:';
  body.appendChild(title);
  let table = document.createElement('table');
  body.appendChild(table);
  let tableHeader = [
    'Title of Book',
    'Name of author',
    'Category',
    'Name of publisher',
    'Price'
  ];
  let headerRow = document.createElement('tr');
  table.appendChild(headerRow);
  for (let i = 0; i < tableHeader.length; i++) {
    let th = document.createElement('th');
    th.textContent = tableHeader[i];
    headerRow.appendChild(th);
  }
  for (let j = 0; j < booksAllData.length; j++) {
    let tableRow = document.createElement('tr');
    table.appendChild(tableRow);
    for (let key in booksAllData[j]) {
      let tableCell = document.createElement('td');
      tableCell.textContent = booksAllData[j][key];
      tableRow.appendChild(tableCell);
    }
  }
};
xhr2.open('GET', 'http://localhost:3000/booksAllData');
xhr2.send('OKOK!');
