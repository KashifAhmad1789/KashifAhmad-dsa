#include <iostream>

using namespace std;
void printUnion(int a[], int b[], int n, int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }
        else{
            cout<<b[j++]<<" ";
            i++;
        }
    }
    while(i<n){
        cout<<a[i++]<<" ";
    }
    while(j<m){
        cout<<b[j++]<<" ";
    }
}
int main() {
   int arr[] = {1,2,3,4,5};
   int arr1[] = {3,4,5,6,7,8,9};
    
    int n = sizeof(arr) / sizeof(int);
    int m = sizeof(arr1) / sizeof(int);
    printUnion(arr,arr1,n,m);
    // for(int i =0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
   return 0;
}