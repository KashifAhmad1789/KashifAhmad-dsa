#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void MoveZerosArray(int a[],int n){
    int count =0;
    int i;
    for(i=0;i<n;i++){
        if(a[i]>0){
            a[count++] = a[i];
        }
    }
    while(count<n){
        a[count++] = 0;
    }
     
}

int main() {
   int n, key, i;
      cin >> n;
      int a[100];
      for (i = 0; i < n; i++)
      {
            cin >> a[i];
      }
    //  sort(a,a+n);
     MoveZerosArray(a,n);
      for (i = 0; i < n; i++)
      {
            cout<<a[i]<<" ";
      }
   return 0;
}
