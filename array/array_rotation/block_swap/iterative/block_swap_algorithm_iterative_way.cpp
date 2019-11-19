#include <iostream>
using namespace std;

void swap(int arr[], int fi, int si, int shift){
  int temp,i;
  for(i=0; i < shift; i++)
    {
      temp = arr[fi + i];
      arr[fi + i] = arr[si + i];
      arr[si + i] = temp;
    }

}

void printArray(int array[], int length){
  for(int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

void leftRotate(int array[], int shift, int length){
  if(shift == 0 || shift == length)
    return;

  int i = shift;
  int j = length - shift;
  while(i != j){
    if(i < j) {
      swap(array, shift - i, shift + j - i, i);
      j -= i;
    } else {
      swap(array, shift - i, shift, j);
      i -= j;
    }
  }
  swap(array, shift - i, shift, i);
}

int main(){
  int array[] = { 1, 2, 3, 4, 5, 6, 7 };

  int shift = 3;
  int length = sizeof(array)/sizeof(array[0]);

  leftRotate(array, shift, length);
  cout << endl;
  printArray(array, length);
  return 0;
}
