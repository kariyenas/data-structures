const minMaxNum = (arr) => {
  let length = arr.length;
  let min=arr[0];
  let max=arr[0];
  for(let i=0;i<length;i++){
    if(min > arr[i]) min = arr[i]
    if(max < arr[i]) max = arr[i]
  }
  return [min,max]
}

const pigenholeSort = (arr) => {
  let [min,max] = minMaxNum(arr)
  let range = (max - min) + 1;
  let holes = new Array(range).fill(0);

  // placing 1 for holes where we will need change
  for(let i=0;i<arr.length;i++){
    holes[arr[i] - min] += 1;
  }
  let j=0 
  for(let i=0;i<range;i++){
    while(holes[j] >0){
      holes[j] -= 1;
      arr[j] = i + min;
      j += 1;
    }
  }
  console.log(arr);
  return arr;
}

pigenholeSort([8,3,2,7,4,6,8]);

pigenholeSort([10,70,65,86,17,23]);
