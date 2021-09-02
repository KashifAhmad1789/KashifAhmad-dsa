#include <iostream>
#include <climits>
using namespace std;
void largestdistinct(int a[], int n){
    int i;
    if(n<3){
        cout<<" provide more data to find this solution"<<endl;
    }
    int first, second, third;
    third = second = first = INT_MIN;
    for(i=0;i<n;i++){
        if(a[i]>first){
            third = second;
            second = first;
            first = a[i];
        }
        else if(a[i]>second){
            third = second;
            second = a[i];
        }
        else{
            third = a[i];
        }
    }
    cout<<first<<" "<<second<<" "<<third<<" ";
}
int main() {
    int arr[] = {10,4,3,50,23,90};
    
    int n = sizeof(arr) / sizeof(int);
    largestdistinct(arr,n);
   return 0;
}
