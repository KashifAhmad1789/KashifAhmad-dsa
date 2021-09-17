#include <iostream>
#include <algorithm>
using namespace std;
    //  this function is used to sort in reverse order
    bool compare(int a,int b){
        cout<<"comparing "<<a<<" and "<<b<<endl;
        return a>b;
    }
int main() {
   
  int n ,i, key;
   cin>>n;
   int a[1000];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
    sort(a,a+n);

    //  this sort function to sort the array in reverse order
    /*
        sort(a,a+n,compare);

    */
   for(i=0;i<n;i++){
       cout<<a[i]<<",";
   }
   return 0;
}