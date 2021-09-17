#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;
int findRepeating(int arr[],int n){
    return accumulate(arr,arr+n,0) - ((n-1)*n/2);
         
    
}
int main() {
   int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findRepeating(arr, n);
   return 0;
}