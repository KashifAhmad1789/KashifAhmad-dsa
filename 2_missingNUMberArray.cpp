#include <iostream>

using namespace std;
int firstone(int a[], int n , int key){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            ans = mid;
            e =mid-1;
        }
        else if(a[mid>key]){
            e =mid -1;
        
        }
        else{
            s = mid +1;
        }
    }
    return ans;
}
int lastone(int a[], int n , int key){
    int s=0;
    int e=n-1;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            ans = mid;
            s=mid +1;
        }
        else if(a[mid>key]){
            e =mid -1;
        
        }
        else{
            s = mid +1;
        }
    }
    return ans;
}
int main() {
   int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(arr) / sizeof(int);
    int key = 5;
    cout<<firstone(arr,n,key)<<endl;
    cout<<lastone(arr,n,key);
   return 0;
}
