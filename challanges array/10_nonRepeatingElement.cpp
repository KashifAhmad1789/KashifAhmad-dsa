// Find the first non-repeating element in a given array of integers


#include <iostream>

using namespace std;
int duplicate(int a[], int n){
    int i,j;
    int x;
    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < n; j++)
            if (i != j && a[i] == a[j]){
                break;
            }
        if (j == n){
            return a[i];
        }
    }
    return -1;
}
int main()
{
    int n,m;
    int a[100]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<duplicate(a,n);
}
