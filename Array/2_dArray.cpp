#include <iostream>

using namespace std;

int main() {
   int a[1000][1000] = {0};
   int val = 1;
   int n ,m;
   cin>>m>>n;
   for(int i=0;i<=m-1;i++){
       for(int j=0;j<=n-1;j++){
           a[i][j] = val;
           val= val+1;
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
   return 0;
}