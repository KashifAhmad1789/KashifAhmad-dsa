#include <iostream>

using namespace std;
int MissingArray(int a[],int n){
    int total = (n+1) * (n+2)/2;
    for(int i=0;i<n;i++){
        total -= a[i];
    }
    return total;
}
int main() {
   int n, m, i, x;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<MissingArray(a,n)<<" ";
   return 0;
}