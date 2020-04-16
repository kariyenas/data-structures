const bubbleSort = (arr) => {
  let len = arr.length;
  for(let i=0;i<len;i++){
    let swapped = false;
    for(let j=0;j<len-i;j++){
      let temp = 0;
      if(arr[j] > arr[j+1]){
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swapped = true;
      }
    }
    if(!swapped) break;
  }
  return arr;
}

console.log(bubbleSort([1,2,3,4,5]));

// Time complexity is O(n*n)
