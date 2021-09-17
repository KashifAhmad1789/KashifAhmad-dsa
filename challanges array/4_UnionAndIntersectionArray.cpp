#include <iostream>

using namespace std;
void printUnion(int a[], int b[], int n, int m){
    int i = 0;
    int j = 0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(b[j]<a[i]){
            cout<<b[j++]<<" ";
        }
        else {
            cout<<b[j++]<<" ";
            i++;
        }

    }
    while(i<n){
         cout << a[i++] << " ";
    }
     while (j < m)
        cout << b[j++] << " ";
}
int main() {
   int n, m, i, x;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        int b[100];
        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        printUnion(a,b,n,m);
   return 0;
}