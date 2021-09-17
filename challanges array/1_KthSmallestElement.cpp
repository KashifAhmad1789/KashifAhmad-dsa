#include <iostream>
#include<algorithm>
using namespace std;
int kthsmallest(int a[],int n, int k){
    //  First we have to sort the array then we simply return the k-1 element of the array
    sort(a, a+n);
    // return k-1 elemne tfor the kthsallest element
    return a[k-1];
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
        cout<<kthsmallest(a,n,k);
   return 0;
}