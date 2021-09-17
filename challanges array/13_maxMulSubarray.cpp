#include <iostream>
// #include <algorithm>
// #include <climits>
// #include <bits/stdc++.h>
using namespace std;
int MaxMulSubArray(int a[], int n){
    int result = a[0];
   int i,j;
   for(i=0;i<n;i++){
       int mul = a[i];
       for(j=i+1;j<n;j++){
           result = max(result, mul);
           mul *= a[j];
       }
       result = max(result,mul);

   }
   return result;
}
int main() {
   int n,i;
   int a[1000];
   cin>>n;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<MaxMulSubArray(a,n)<<" "<<endl;
   return 0;
}