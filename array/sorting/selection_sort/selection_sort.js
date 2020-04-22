const selectionSort = (arr) => {
  let len = arr.length;
  let max_index = len -1;
  
  for(let i=len-1;i>=0;i--){
    for(let j=i-1;j>=0;j--){
      if(arr[i]<arr[j]){
        let temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  return arr;
}


console.log(selectionSort([5,2,1,3,4]));
