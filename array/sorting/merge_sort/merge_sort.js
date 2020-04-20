const merge = (arr_1, arr_2) => {
 let [i,j] =[0,0];
  let mergedArray = [];
  while(arr_1.length > i && arr_2.length > j){
    if(arr_1[i] > arr_2[j]){
      mergedArray.push(arr_2[j++]);
    } else if(arr_2[j] > arr_1[i]){
      mergedArray.push(arr_1[i++]);
    }
  }

  while(arr_1.length > i){
    mergedArray.push(arr_1[i++]);
  }

  while(arr_2.length > j){
    mergedArray.push(arr_2[j++])
  }
  return mergedArray;
}

const mergeSort = (arr) => {
  let len = arr.length;
  if(arr.length === 1) return arr;
  let median = parseInt(len/2);
  let left = mergeSort(arr.slice(0,median));
  let right = mergeSort(arr.slice(median));
  return merge(left,right);
}

let arry = [6,5,3,1,8,4,7,2];
mergeSort(arry);
