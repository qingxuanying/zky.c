let arrays = [[1, 2, 3], [4, 5], [6]];
let x=(a,current)=> a.concat(current);
console.log(arrays.reduce(x ,[]));
