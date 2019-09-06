'use strict';

const routes = require('./app/routes');
const PORT = 3000;

routes.listen(PORT, () => {
  console.log(`Server running on port ${PORT} 🔥`);
});
