#include <iostream>
using namespace std;


void leftRotate(int array[], int shift, int length){
  reverseBlock(array, shift, length);
}

void reverseBlock(){
  

}

void printArray(int array[], int length){
  for(int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

int main(){
  int array[] = {1,2,3,4,5,6,7,8,9,10,11}
  int shift = 3;
  int length = sizeof(array)/sizeof(array[0]);

  leftRotate(array, shift, length);
  printArray(array, length);
  return 0;
}
