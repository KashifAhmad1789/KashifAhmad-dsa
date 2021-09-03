#include <iostream>

using namespace std;
int peakOFArray(int a[], int n){
    int i;
    // first and last elemnt is peak elemnt
 if(n==1){
     return 0;
 }
 if (a[n - 1] >= a[n - 2])
        return n - 1;

 for(int i=0;i<n-1;i++){
     if(a[i-1]<=a[i] && a[i]>=a[i+1])
         return a[i];
 }
 return -1;
}
int main() {
    int arr[] = {5,10,20,15};
    
    int n = sizeof(arr) / sizeof(int);
    cout<<peakOFArray(arr,n);
   return 0;
}