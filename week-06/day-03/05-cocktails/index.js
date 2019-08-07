const express = require('express');
let app = express();
const PORT = 3000;
app.listen(PORT);
app.set('view engine', 'ejs');
app.use(express.static('assets'));

app.get('/', (req, res) => {
  let filteredCocktails = [];
  if (alcoholList.includes(req.query.alcohol)) {
    for (let i = 0; i < cocktails.length; i++) {
      if (cocktails[i].contains.includes(req.query.alcohol)) {
        filteredCocktails.push(cocktails[i]);
      }
    }
  } else if (!alcoholList.includes(req.query.alcohol)) {
    filteredCocktails = cocktails;
  }
  res.render('home', { cocktail: filteredCocktails, alcohol: alcoholList });
});

const cocktails = [
  {
    name: 'GIN FIZZ',
    price: 1520,
    contains: ['gin', 'sugar', 'lemon juice', 'soda'],
    isAlcoholic: true
  },
  {
    name: 'BLOODY MARY',
    price: 1650,
    contains: ['vodka', 'tomato juice', 'spices'],
    isAlcoholic: true
  },
  {
    name: 'SEX ON THE BEACH',
    price: 1850,
    contains: ['vodka', 'peach schnapps', 'orange juice', 'cranberry juice'],
    isAlcoholic: true
  },
  {
    name: 'CUBA LIBRE',
    price: 1850,
    contains: ['rum', 'cola', 'lime juice'],
    isAlcoholic: true
  },
  {
    name: 'MOJITO',
    price: 1850,
    contains: ['rum', 'sugar', 'lime juice', 'soda water'],
    isAlcoholic: true
  },
  {
    name: 'LONG ISLAND ICE TEA',
    price: 2450,
    contains: ['vodka', 'rum', 'gin', 'tequila', 'triple sec', 'cola'],
    isAlcoholic: true
  },
  {
    name: 'VIRGIN MOJITO',
    price: 990,
    contains: ['sugar', 'lime juice', 'soda water'],
    isAlcoholic: false
  },
  {
    name: 'SAFE SEX ON THE BEACH',
    price: 990,
    contains: ['peach schnapps', 'orange juice', 'cranberry juice'],
    isAlcoholic: false
  }
];

const alcoholList = ['gin', 'vodka', 'rum', 'tequila'];
