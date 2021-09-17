#include <iostream>

using namespace std;

int main() {
   int n, k, i, x;
    cin >> n;
    int a[100];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s=0;
    int e=n-1;
    for(i=s;i<e;i++){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for (i = 0; i < n; i++)
    {
        cout<< a[i]<<",";
    }
   return 0;
}