const express = require('express');
const app = express();
const PORT = 3000;
// const fetchUrl = require("fetch").fetchUrl;
const fetchJson = require('fetch-json');
app.set('view engine', 'ejs');
app.use(express.static('static'));

app.get('/', (req, res) => {
  res.render('dashboard.ejs', { database: forecasts });
});

app.get('/cities/:city', (req, res) => {
  // Open weather API
  let weatherObject = [];
  const URL = `http://api.openweathermap.org/data/2.5/forecast?q=${req.params.city}&APPID=9275b72dd799e13720c39f8c455f8de2`;
  fetchJson.get(URL)
    .then((data) => {
      weatherObject = [
        {
          time: data.list[0].dt_txt,
          icon: data.list[0].weather[0].icon,
          temp: data.list[0].main.temp,
          description: data.list[0].weather[0].description
        },
        {
          time: data.list[1].dt_txt,
          icon: data.list[1].weather[0].icon,
          temp: data.list[1].main.temp,
          description: data.list[1].weather[0].description
        },
        {
          time: data.list[2].dt_txt,
          icon: data.list[2].weather[0].icon,
          temp: data.list[2].main.temp,
          description: data.list[2].weather[0].description
        },
        {
          time: data.list[3].dt_txt,
          icon: data.list[3].weather[0].icon,
          temp: data.list[3].main.temp,
          description: data.list[3].weather[0].description
        },
        {
          time: data.list[4].dt_txt,
          icon: data.list[4].weather[0].icon,
          temp: data.list[4].main.temp,
          description: data.list[4].weather[0].description
        }
      ];
      return weatherObject;
    })
    .then((data) => {
      res.render('detailed.ejs', { weatherObject: data, city: req.params.city });
    });
});


app.listen(PORT, () => console.log(`Server is up and running on ${PORT} 🚨`));

// Static Database
const forecasts = [
  {
    city: 'Budapest',
    location: 'Hungary',
    weather: [
      { temp: 12, icon: 'partly_cloudy', message: 'It\'s cloudy.' },
      { temp: 16, icon: 'rainy', message: 'Sooo... Wet.' },
      { temp: 18, icon: 'partly_cloudy', message: 'Here comes the sun.' },
      { temp: 16, icon: 'partly_cloudy', message: 'Not too sunny.' },
      { temp: 19, icon: 'partly_cloudy', message: 'So far so good.' },
    ],
  },
  {
    city: 'Seattle',
    location: 'Washington, United States',
    weather: [
      { temp: 11, icon: 'cloudy', message: 'Complete Grey' },
      { temp: 11, icon: 'cloudy', message: 'Just stay in bed.' },
      { temp: 13, icon: 'cloudy', message: 'Meh...' },
      { temp: 12, icon: 'cloudy', message: 'Still meh...' },
      { temp: 13, icon: 'partly_cloudy', message: 'Not too sunny.' },
    ],
  },
  {
    city: 'Miami',
    location: 'Florida, United States',
    weather: [
      { temp: 33, icon: 'sunny', message: 'Hot.' },
      { temp: 35, icon: 'sunny', message: 'Too hot!' },
      { temp: 34, icon: 'sunny', message: 'Sunny.' },
      { temp: 34, icon: 'sunny', message: 'Beach time!' },
      { temp: 35, icon: 'sunny', message: 'Here comes the sun.' },
    ],
  },
  {
    city: 'Barcelona',
    location: 'Spain',
    weather: [
      { temp: 19, icon: 'sunny', message: 'Sunny.' },
      { temp: 15, icon: 'partly_cloudy', message: 'Not too sunny.' },
      { temp: 17, icon: 'sunny', message: 'So far so good.' },
      { temp: 16, icon: 'rainy', message: 'Rihanna - Umbrella' },
      { temp: 18, icon: 'sunny', message: 'Here comes the sun.' },
    ],
  },
  {
    city: 'London',
    location: 'United Kingdom',
    weather: [
      { temp: 4, icon: 'snowy', message: 'Go home winter.' },
      { temp: 7, icon: 'rainy', message: 'Do you have an umbrella?' },
      { temp: 10, icon: 'rainy', message: 'It\'s rainy.' },
      { temp: 9, icon: 'rainy', message: 'Meh...' },
      { temp: 11, icon: 'rainy', message: 'Meh... Again.' },
    ],
  },
  {
    city: 'Taipei',
    location: 'Taiwan',
    weather: [
      { temp: 33, icon: 'cloudy', message: 'It\'s cloudy.' },
      { temp: 33, icon: 'rainy', message: 'Sooo... Wet.' },
      { temp: 33, icon: 'partly_cloudy', message: 'Here comes the sun.' },
      { temp: 33, icon: 'partly_cloudy', message: 'Not too sunny.' },
      { temp: 33, icon: 'partly_cloudy', message: 'So far so good.' },
    ],
  },
];