#include <iostream>

using namespace std;
int CountPair(int a[],int n,int k){
    int i;
    int j;
    int counter = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i] + a[j]== k){
                counter++;
                
            }
            
        }
    }
    return counter;
}
int main() {
   int n, m, i, x, k;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"enter the element k"<<endl;
        cin>>k;
        cout<<CountPair(a,n,k)<<" ";
   return 0;
}