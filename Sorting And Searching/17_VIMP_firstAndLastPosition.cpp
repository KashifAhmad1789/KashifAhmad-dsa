 
 /*
 Find First and Last Position of Element in Sorted Array
Medium

6777

226

Add to List

Share
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
*/
#include <iostream>

using namespace std;
int searchRange(int a[],int n, int target){
    int ans[] = {-1, -1};
    int start = search(a,n,target,findfirstindex:true);
    int end = search(a,n,target,findfirstindex:false);
    ans[0] = start;
    ans[1] = end;
    return ans;
}
int search(int a[],int n, int target,boolean findfirstindex){
    int ans = -1;
    int start =0;
    int end = n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(target<a[mid]){
            end = n-1;
        }
        else if(target>a[mid]){
            start = mid + 1;
            
        }
        else{
            ans = mid;
            if(findfirstindex=true){
                end = mid-1;
            }
            else{
                start = mid +1;
            }
        }
    }
    return ans;
}

int main() {
   int n;
   int a[100];
   int target =8;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<searchRange(a,n,target);

   return 0;
}