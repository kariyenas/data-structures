// Quick sort

const quickSort = (arr,low,high) => {
  const swap = (arr,i,j) => {
    let temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    return arr;
  }

  const partition = (arr, low, high) => {
    let pivot = arr[high];
    let min_index =low -1;
    
      for(let j=0;j<high;j++){
        if(arr[j] < arr[high]){
          console.log("arr[j] is "+arr[j]+" arr[high] is "+ arr[high])
          min_index += 1;
          if(min_index !== j){
            swap(arr,min_index,j);  
          }
        }
      }
    swap(arr, min_index+1, high);
    console.log(arr);
    return min_index+1;
  }
  if(low < high){
    pi = partition(arr, 0, high);
    
    quickSort(arr, low, pi-1 );
    quickSort(arr,pi+1,high);
  }
  return arr;
}
quickSort([5,4,2,3,1,7,6],0, 6);
