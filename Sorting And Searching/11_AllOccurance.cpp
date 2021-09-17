#include <iostream>

using namespace std;
void AllOccurance(int a[], int i,int n, int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ,";
    }
    AllOccurance(a,i+1,n,key);
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
   AllOccurance(a,i,n,key);
   return 0;
}