#include <iostream>

using namespace std;
int duplicatearray(int a[], int n){
    int count =0;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                cout<<a[i]<<" ";
                
            }
        }

    }
    cout<<endl;
    return count;
}
int main() {
    int arr[] = {1, 2, 3, 1, 3, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    cout<<duplicatearray(arr,n)<<" ";
   return 0;
}