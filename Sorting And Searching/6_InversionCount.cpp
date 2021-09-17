/* 
Count Inversions in an array | Set 1 (Using Merge Sort)
Difficulty Level : Hard
Last Updated : 28 Jun, 2021
 
Inversion Count for an array indicates – how far (or close) the array is from being sorted. If the array is already sorted, then the inversion count is 0, but if the array is sorted in the reverse order, the inversion count is the maximum. 
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j 
Example: 

Input: arr[] = {8, 4, 2, 1}
Output: 6

Explanation: Given array has six inversions:
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).


Input: arr[] = {3, 1, 2}
Output: 2

Explanation: Given array has two inversions:
(3, 1), (3, 2) 

*/


#include <iostream>

using namespace std;
int getInvCount(int a[],int n){
    int invercount = 0;
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
                invercount++;
        }
    }
    return invercount;
}
int main() {
   int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are "
         << getInvCount(arr, n);
    return 0;
   
}