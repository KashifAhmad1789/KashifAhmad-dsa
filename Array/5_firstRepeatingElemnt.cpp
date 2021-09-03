#include <iostream>

using namespace std;
int firstREpeatingElemnt(int a[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    return -1;
}

// firrst non repeating element
int firstnonREpeatingElemnt(int a[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j and a[i]==a[j]){
               break;
            }
        }
        if(j==n){
            return a[i];
        }
    }
    return -1;
}
int main() {
//    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    // cout<<firstREpeatingElemnt(arr,n)<<" ";



   int arr[] = {-1 ,2, -1, 3, 2};
    
    int n = sizeof(arr) / sizeof(int);
    
    cout<<firstnonREpeatingElemnt(arr,n)<<" ";
   return 0;
}
