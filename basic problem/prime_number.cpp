#include <iostream>

using namespace std;

int main(){
int n;
cin>>n;
int i;
for (i=2;i<=n-1;i++)
{
      if(n%i==0){
            cout<<n<<"not prime"<<endl;
            break;
      }
}
if(i==n){
      cout<<n<<"this is prime number"<<endl;
}
return 0;
}