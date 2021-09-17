#include <iostream>

using namespace std;
int LastOccurance(int a[], int n, int key){
    if(n==0){
        return -1;
    }
    int i = LastOccurance(a+1,n-1,key);
    if(i==-1){
        if(a[0]==key){
            return 0;
        }
        else
            return -1;
    }
    return i+1;
}
int main() {
   int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
//    int i=0;
   int key; cin>>key;
   cout<<LastOccurance(a,n,key)<<" ";
   return 0;
}