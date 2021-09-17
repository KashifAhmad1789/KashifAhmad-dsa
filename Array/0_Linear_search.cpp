#include <iostream>

using namespace std;

int main() {
   int n , i, key;
   cin>>n;
   int a[1000];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<"enter the number to search"<<endl;
   cin>>key;
                //    Linear search algorithm;
   for(i=0;i<=n-1;i++){
       if(a[i]==key){
           cout<<key<<" found at "<<i<<" position"<<endl;
           break;
       }
   }
   if(a[i]==n){
       cout<<key<<"elements not found"<<endl;
   }
   return 0;
}