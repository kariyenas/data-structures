#include<iostream>

using namespace std;

void printArray(int a[], int l){
  for(int i = 0; i < l; i++){
    cout << a[i] << " ";
  }
  cout << "" << endl;
}

int main(){
  int t;
  cin >> t;
  for(int k = 0; k < t; k++){
    int size;
    cin >> size;
    int a[size];
    for(int j = 0; j < size; j++){
      cin >> a[j];
    }
    int l = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i < l; i++){
      if(a[i] != i && a[i] != -1 && a[i] < l){
          int x = a[a[i]];
          a[a[i]] = a[i];
          a[i] = x;
      } else if(a[i] > l) {
        a[i] = -1;
      }
      //printArray(a,l);
    }
    printArray(a, l);
  }
}
