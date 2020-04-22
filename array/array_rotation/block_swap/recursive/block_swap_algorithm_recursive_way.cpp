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
  if (shift == 0) {
    return;
  }

  if (shift == length - shift) {
    swap(array, 0, length - shift, shift);
    return;
  }
  if( shift < length - shift ){
    swap(array, 0, length - shift, shift);
    leftRotate(array, shift, length - shift);
  } else {
    swap(array, 0 , shift, length - shift);
    leftRotate(array + (length - shift), 2 * shift - length, shift);
  }
  
}

int main(){
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
  int shift = 2;
  int length = sizeof(array)/sizeof(array[0]);

  leftRotate(array, shift, length);
  printArray(array, length);
  return 0;
}
