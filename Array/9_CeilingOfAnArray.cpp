
#include <iostream>
#include <algorithm>


using namespace std;
int ceilingArray(int a[], int low, int high, int key){
    int i;
    if(key<=a[low]){
        return low;
    }
    for(i=low;i<high;i++){
        if(a[i]==key){
            return i;
        }


        if(a[i]<key && a[i+1]>=key){
            return i+1;
        }
    }
    return -1;
}
int FloorArra(int a[], int low, int high, int key){
    int i;
    if(key<=a[low]){
        return low;
    }
    for(i=low;i<high;i++){
        if(a[i]==key){
            return i;
        }


        if(a[i]<key && a[i+1]>=key){
            return i;
        }
    }
    return -1;
}



int main() {
   int arr[] = {1, 2, 8, 10, 10, 12, 19};
    
    int n = sizeof(arr) / sizeof(int);
    int key = 3;
    int index = ceilingArray(arr, 0, n-1, key);
    if(index == -1)
        cout << "Ceiling of " << key << " doesn't exist in array ";
    else
        cout << "ceiling of " << key << " is " << arr[index];
        cout<<endl;
        // floor
        int index2 = FloorArra(arr, 0, n-1, key);
    if(index2 == -1)
        cout << "Floor of " << key << " doesn't exist in array ";
    else
        cout << "Floor of " << key << " is " << arr[index2];
   return 0;
}


