#include <iostream>

using namespace std;
int maximumArray(int a[],int n){
    int i;
    int max = 0;
    for(i=0;i<n;i++){
        if(a[i]>max){
         max = a[i] ;
        }
    }
    return max;
}
int main() {
   int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<maximumArray(a,n);

   return 0;
}