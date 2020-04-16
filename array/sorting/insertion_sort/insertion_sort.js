const insertionSort = (arr) => {
  const swap = (arr,i,j) => {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
  let len = arr.length;
  let j;
  for(i=1;i<len;i++){
    j=0;
    while(j<i){
      console.log("i is " +i+" and j is "+j+" the elements at j and i are "+ arr[j] +","+ arr[i]);
      if(arr[i] < arr[j]){
        swap(arr,i,j);
      }
      j +=1;
    }
  }
  return arr;
}

console.log(insertionSort([5,4,2,3,1,7,6]));
