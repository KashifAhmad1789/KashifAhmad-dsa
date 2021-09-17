#include <iostream>

using namespace std;
void DnfAlgo(int a[], int n){
    int lo = 0;
    int hi = n-1;
    int mid = 0;
    while(mid<=hi){
        if(a[mid]==0){
            swap(a[mid],a[lo]);
            lo++;
            mid++;
        }
        if(a[mid]==1){
            mid++;
        }
        if(a[mid]==2){
            swap(a[mid], a[hi]);
            hi--;
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
      DnfAlgo(a,n);
      for (i = 0; i < n; i++)
      {
            cout<<a[i]<<" ";
      }
   return 0;
}