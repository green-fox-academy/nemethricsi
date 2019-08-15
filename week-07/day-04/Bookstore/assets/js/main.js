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

// let tableHeader = [
//   'Title of Book',
//   'Name of author',
//   'Category',
//   'Name of publisher',
//   'Price'
// ];
const xhr2 = new XMLHttpRequest();
xhr2.onload = function() {
  const booksAllData = JSON.parse(xhr2.responseText);
  let table = document.createElement('table');
  body.appendChild(table);
  for (let i = 0; i < booksAllData.length; i++) {
    let row = document.createElement('tr');
    table.appendChild(row);
    let cell = document.createElement('td');
    cell.textContent = booksAllData[i].book_name;
    row.appendChild(cell);
    let cell2 = document.createElement('td');
    cell2.textContent = booksAllData[i].aut_name;
    row.appendChild(cell2);
    let cell3 = document.createElement('td');
    cell3.textContent = booksAllData[i].cate_descrip;
    row.appendChild(cell3);
    let cell4 = document.createElement('td');
    cell4.textContent = booksAllData[i].pub_name;
    row.appendChild(cell4);
    let cell5 = document.createElement('td');
    cell5.textContent = booksAllData[i].book_price;
    row.appendChild(cell5);
  }
  //  let headerRow = document.createElement('tr');
  //  table.appendChild(headerRow);
  //  for (let i = 0; tableHeader.length; i++) {
  //    let th = document.createElement('th');
  //    th.textContent = tableHeader[i];
  //    headerRow.appendChild(th);
  //  }
  //  for (let j = 0; j < booksAllData.length; j++) {
  //    let tableRow = document.createElement('tr');
  //    table.appendChild(tableRow);
  //    for (let k = 0; k < booksAllData[j].length; k++) {
  //     let tableCell${k} = document.createElement('td');
  //      tableCell${k}.textContent = booksAllData[j][k];
  //      tableRow.appendChild(tableCell${k});
  //    }
  //  }
};
xhr2.open('GET', 'http://localhost:3000/booksAllData');
xhr2.send('OKOK!');
