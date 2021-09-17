/* 
Find position of an element in a sorted array of infinite numbers
Difficulty Level : Medium
Last Updated : 17 Aug, 2021
Suppose you have a sorted array of infinite numbers, how would you search an element in the array?
Source: Amazon Interview Experience. 
Since array is sorted, the first thing clicks into mind is binary search, but the problem here is that we don’t know size of array. 
If the array is infinite, that means we don’t have proper bounds to apply binary search. So in order to find position of key, first we find bounds and then apply binary search algorithm.
Let low be pointing to 1st element and high pointing to 2nd element of array, Now compare key with high index element, 
->if it is greater than high index element then copy high index in low index and double the high index. 
->if it is smaller, then apply binary search on high and low indices found. 
*/



#include <iostream>

using namespace std;
int binary_search(int a[], int start,int end, int key){

     
      while(start<=end){
            int mid = (start+end)/2;
            if(a[mid]==key){
                  return mid;
            }
            else if(a[mid]>key){
                  end= mid-1;
            }
      else{
            start=mid+1;
      }
      }
      return -1;
}
int InfiniteArray(int a[],int target){
     int start = 0;
        int end = 1;

        // condition for the target to lie in the range
        while (target > a[end]) {
            int temp = end + 1; // this is my new start
            // double the box value
            // end = previous end + sizeofbox*2
            end = end + (end - start + 1) * 2;
            start = temp;
        }
       return binary_search(a, start,end, target);

}

int main() {
   int arr[] = {3, 5, 7, 9, 10, 90,
                100, 130, 140, 160, 170};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    cout<<InfiniteArray(arr,target)<<" ";
   return 0;
}