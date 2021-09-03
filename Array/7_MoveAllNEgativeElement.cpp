//Move all Negative Element at one side
#include <iostream>
#include <algorithm>
using namespace std;
void negativeElement(int a[], int n){
    sort(a,a+n);
}
int main() {
    int arr[] = {-10,4,3,50,-23,-90};
    
    int n = sizeof(arr) / sizeof(int);
    negativeElement(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}