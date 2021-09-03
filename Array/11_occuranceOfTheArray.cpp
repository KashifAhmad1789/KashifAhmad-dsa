#include <iostream>
#include <algorithm>
using namespace std;
int occuranceArray(int a[], int n, int k){
        int count = 0;
    for(int i=0;i<n;i++){
        
        if(a[i]==k){
            count++;
            
        }
    }
    return count;       
   
}
int main() {
   int n, k, i, x;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<"enetr the k elemet"<<endl;
        cin>>k;
        cout<<occuranceArray(a,n,k);
   return 0;
}
