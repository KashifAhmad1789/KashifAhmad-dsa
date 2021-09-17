#include <iostream>

using namespace std;
int SingleElement(int arr[],int n){
    int res =0;
for(int i=0;i<n;i++){
    res = res ^ arr[i];
}
return res;
}
int main() {
    int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << SingleElement(arr, n);
   return 0;
}