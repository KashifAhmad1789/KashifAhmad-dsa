#include <iostream>

using namespace std;
int FirstOccurance(int a[], int n, int key){
    if(n==0){
        return -1;
    }
    if(a[0]==key){
        return 0;
    }
    int i = FirstOccurance(a+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}
//  Anothe method for linear search in recursive case
int LinearSearch(int a[], int i,int n, int key){
    if(i==n){
        return -1;
    }
    if(a[i]==key){
        return i;
    }
    return LinearSearch(a,i+1,n,key);
}
int main() {
   int n;
   cin>>n;
   int a[100];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int i=0;
   int key; cin>>key;
//    cout<<FirstOccurance(a,n,key);

   cout<<LinearSearch(a,i,n,key);
   return 0;
}