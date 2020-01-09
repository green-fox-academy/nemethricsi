const graph = {
  A: {B: 15, C: 13, D: 5},
  B: {H: 12},
  C: {D: 18, F: 6},
  D: {E: 4, H: 99},
  E: {C: 3, F: 1, G: 9, H: 14},
  F: {B: 8, I: 17},
  G: {F: 16, I: 7, H: 10},
  H: {I: 11},
  I: {},
};

const lowestCostNode = (costs, processed) => {
  return Object.keys(costs).reduce((lowest, node) =>{
    if (lowest === null || costs[node] < costs[lowest]) {
      if (!processed.includes(node)) {
        lowest = node;
      }
    }
    return lowest;
  }, null);
};

const dijkstra = (graph) => {
  const costs = Object.assign({I: Infinity}, graph.A);
  const parents = {I: null};
  for (let child in graph.A) {
    parents[child] = 'A';
  }
  const processed = [];

  let node = lowestCostNode(costs, processed);

  while (node) {
    let cost = costs[node];
    let children = graph[node];
    for (let n in children) {
      let newCost = cost + children[n];
      if(!costs[n]) {
        costs[n] = newCost;
        parents[n] = node;
      }
      if (costs[n] > newCost) {
        costs[n] = newCost;
        parents[n] = node;
      }
    }
    processed.push(node);
    node = lowestCostNode(costs, processed);
  }

  let optimalPath = ['I'];
  let parent = parents.I;
  while (parent) {
    optimalPath.push(parent);
    parent = parents[parent];
  }
  optimalPath.reverse();

  const results = {
    distance: costs.I,
    path: optimalPath,
  };

  return results;
};

console.log('dijkstra', dijkstra(graph));
