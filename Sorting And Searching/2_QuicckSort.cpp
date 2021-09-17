#include <iostream>

using namespace std;
int partioning(int a[], int s, int e){
     int i = s-1;
     int j = s;
     int pivot = a[e];
     for( ;j<=e-1;){
         if(a[j]<=pivot){
             i = i+1;
             swap(a[i], a[j]);
         }
         j = j+1;
     }
     swap(a[i+1], a[e]);
     return i+1;
}
void quicksort(int a[], int s, int e){
    //base case
    if(s>=e){
        return;
    }
    // recursive case
    int p = partioning(a,s, e);
    //left part
    quicksort(a,s,p-1);
    quicksort(a, p+1,e);
}
int main() {
   int n, key, i;
      cin >> n;
      int a[100];
      for (i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      quicksort(a,0,n-1);
      for (i = 0; i < n; i++)
      {
            cout<<a[i]<<" ";
      }
   return 0;
}