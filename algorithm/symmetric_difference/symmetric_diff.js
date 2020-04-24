const reducer = (accumulator, array) => {
  let result = [];
  accumulator.forEach((i) => {
    if(!array.includes(i) && !result.includes(i)){
      result.push(i);
    }
  });

  array.forEach((i) => {
    if(!accumulator.includes(i) && !result.includes(i)){
      result.push(i);
    }
  });

  return result;
}

function sym(...args) {
  args = args.sort((a,b) => b.length - a.length )
             .map((i) => i.sort((a,b) => a>b));
  
  return args.reduce(reducer);
}


let output = sym([1, 2, 3], [5, 2, 1, 4],[3,4,1]);
console.log(output);

