#include <iostream>

using namespace std;
int CeilingInArray(int a[],int high,int low,int x){
    int i;
    if(a[i]==a[low]){
        return low;
    }
    
    for(i=low;i<high;i++){
        if(a[i] == x)
            return i;


        if(a[i]<x && a[i+1]>=x)
            return i+1;
        
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int index = CeilingInArray(arr, 0, n-1, x);
    if(index == -1)
        cout << "Ceiling of " << x << " doesn't exist in array ";
    else
        cout << "ceiling of " << x << " is " << arr[index];
   return 0;
}