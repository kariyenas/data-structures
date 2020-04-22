#include <iostream>
using namespace std;

int main(){
 int a[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
 int length = sizeof(a)/sizeof(a[0]);

 for(int i = 0; i < length; i++)
  {
    if(a[i]!= -1 && a[i] != i){
      int x = a[i];
      while(a[x] != -1 && a[x] != x){
        int y = a[x];
        a[x] = x;
        x = y;
      }
      a[x] = x;
      if(a[i] != i){
        a[i] = -1;
      }
    }
  }

 for(int i = 0; i < length; i++)
 {
  cout << a[i] << " ";
 }
}
