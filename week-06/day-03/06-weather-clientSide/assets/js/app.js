//jshint esversion:6
//jshint browser: true

'use strict';

// const bodyParser = require('body-parser');

let xhr = new XMLHttpRequest;
let url = 'http://api.openweathermap.org/data/2.5/weather?q=Szentkiralyszabadja&APPID=9275b72dd799e13720c39f8c455f8de2';
xhr.onload = function () {
  let weather = (JSON.parse(xhr.responseText));
  console.log(weather);
  let heat = document.getElementById('heat');
  let celsius = Math.floor(Number(weather.main.temp) - 273.15);
  heat.textContent = celsius + ' °C';
  let city = document.getElementsByTagName('h1')[0];
  city.textContent = weather.name;
  let description = document.getElementById('desc');
  description.textContent = weather.weather[0].main;
  let sunset = document.getElementById('suns');
  sunset.textContent = 'Napnyugta: ' + new Date(weather.sys.sunset * 1000).toLocaleTimeString(navigator.language, { hour: '2-digit', minute: '2-digit' });
  let sunrise = document.getElementById('sunr');
  sunrise.textContent = 'Napkelte: ' + new Date(weather.sys.sunrise * 1000).toLocaleTimeString(navigator.language, { hour: '2-digit', minute: '2-digit' });

  // let userInput = req.body.city;
  // console.log(req.body.city);

  // let btn = document.getElementsByTagName('button')[0];
  // btn.onclick = function () {
  //   url = `http://api.openweathermap.org/data/2.5/weather?q=${userInput}&APPID=9275b72dd799e13720c39f8c455f8de2`
  // };

};

xhr.open('GET', url);

xhr.send();

let xhr2 = new XMLHttpRequest;
xhr2.onload = function () {
  let weather = (JSON.parse(xhr2.responseText));
  console.log(weather);
  let heat = document.getElementById('heat2');
  let celsius = Math.floor(Number(weather.main.temp) - 273.15);
  heat.textContent = celsius + ' °C';
  let city = document.getElementsByTagName('h1')[1];
  city.textContent = weather.name;
  let description = document.getElementById('desc2');
  description.textContent = weather.weather[0].main;
};

xhr2.open('GET', 'http://api.openweathermap.org/data/2.5/weather?q=Taipei&APPID=9275b72dd799e13720c39f8c455f8de2');

xhr2.send();
