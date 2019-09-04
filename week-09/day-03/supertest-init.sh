GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m'

mkdir ProjectFolder && cd ProjectFolder
mkdir test && touch test/test-routes.js
npm init -f
npm i tape supertest --save-dev
npm i express --save
touch server.js routes.js

cat <<EOF >>server.js
'use strict';

const routes = require('./routes');
const PORT = 3000;

routes.listen(PORT, () => {
  console.log(\`Server running on port \${PORT} 🔥\`);
});
EOF

cat <<EOF >>routes.js
const express = require('express');
const app = express();

app.get('/', (req, res) => {
    // implement your METHOD here
    });

module.exports = app;
EOF

cat <<EOF >>test/test-routes.js
'use strict';

const test = require('tape');
const request = require('supertest');
const app = require('../routes');

test('test name', (t) => {
    // implement your TEST here
});
EOF

exit 0;
