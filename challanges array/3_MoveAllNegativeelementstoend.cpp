#include <iostream>
#include <algorithm>
using namespace std;
void negativeElement(int a[], int n){
 sort(a,a+n);
}
int main() {
   int n, k, i, x;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        negativeElement(a,n);
        for (i = 0; i < n; i++)
        {
            cout<< a[i]<<" ";
        }
   return 0;
}