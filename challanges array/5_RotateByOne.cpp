#include <iostream>

using namespace std;
void Rotate(int a[],int n){
    int x = a[n-1] ,i;
    
    for(i = (n-1);i>0;i--){
       a[i] = a[i-1];
    }
       a[0] = x;

}
int main() {
   int n, m, i, x;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Rotate(a,n);
        for (i = 0; i < n; i++)
        {
            cout<< a[i]<<" ";
        }
   return 0;
}