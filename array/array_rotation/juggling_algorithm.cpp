#include <iostream>

using namespace std;

int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  return gcd(b, a % b);
}

// [1,2,3,4,5,6]
void rotateLeft(int array[], int d, int length){
  for(int i = 0; i < gcd(length, d); i++){
    int temp = array[i];
    int j = i;

    while(true){
      int k = j + d;
      if(k >= length){
        k = k-length;
      }
      if(k == i){
        break;
      }
      array[j] = array[k];
      j = k;
    }
    array[j] = temp;
  }
}

void printArray(int array[], int length){
  for(int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

int main(){
  int array[] = {1,2,3,4,5,6,7,8};
  int k = 2;
  int length = sizeof(array) / sizeof(array[0]);
  rotateLeft(array, k, length);
  printArray(array, length);
}
