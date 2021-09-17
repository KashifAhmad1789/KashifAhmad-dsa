#include <iostream>

using namespace std;

int main(){
int n,key,i;
cin>>n;
int a[100];
for(i=0;i<n;i++){
      cin>>a[i];

}
cout<<"enter the element u want to search"<<endl;
cin>>key;
for(i=0;i<=n-1;i++){
      if(a[i]==key){
            cout<<key<<" element found at "<<i<<" position"<<endl;
            break;
      }
      if(i==n){
            cout<<key<<"element not found "<<endl;
      }
}
return 0;
}