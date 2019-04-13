#include <iostream>
using namespace std;

void leftRotate(int [], int, int);
void reverse(int [], int, int);
void printArray(int array[], int length);

int main(){
int array[] = {1,2,3,4,5,6,7,8,9,10,11,12};
int shift = 4;
int length = sizeof(array) / sizeof(array[0]);
leftRotate(array, shift, length);
printArray(array, length);
return 0;
}


void leftRotate(int array[], int shift, int length){
  reverse(array, 0, shift - 1);
  reverse(array, shift, length - 1);
  reverse(array, 0, length - 1);

}

void reverse(int array[], int start, int end) {
  while(start < end) {
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
    start++;
    end--;
  }
}

void printArray(int array[], int length){
  for(int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}
