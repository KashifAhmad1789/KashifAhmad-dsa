#include <iostream>

using namespace std;
void leftrotatebyone(int a[], int n){
    int i;
    int temp = a[0];
    for(i=0;i<n-1;i++){
        a[i] = a[i+1];
    }
    a[n-1] =  temp;
}
void leftrotate(int a[], int n, int d){
    for(int i=0;i<d;i++)
        leftrotatebyone(a, n);
    


}
int main() {
   int n,i,d;
   int a[1000];
   cin>>n;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cin>>d;
   leftrotate(a,n,d);
   for(i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
   return 0;
}
