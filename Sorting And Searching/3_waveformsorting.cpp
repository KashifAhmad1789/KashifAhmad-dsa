#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
void waveform(int a[],int n){
    // previous element
    for(int i=0;i<n;i+=2){
        if(i!=0 and a[i]<a[i-1]){
            swap(a[i], a[i-1]);
        }
        // next element
        if(i!=n-1 and a[i]< a[i+1]){
            swap(a[i],a[i+1]);
        }
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
     waveform(a,n);
      for (i = 0; i < n; i++)
      {
            cout<<a[i]<<" ";
      }
   return 0;
}
