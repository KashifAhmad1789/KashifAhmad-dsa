#include <iostream>

using namespace std;
int LinearSearch(int a[],int n,int k){
for(int i=0;i<=n;i++){
    if(a[i]==k){
        cout<<"elemet found"<<endl;
        break;
    }
    if(a[i]==n){
        cout<<"element not found"<<endl;
    }
    
}


}
int main() {
   int n;
   cin>>n;
   int a[100] = {0};
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int key;
   cin>>key;
   cout<<LinearSearch(a,n,key)<<" ";
   return 0;
}