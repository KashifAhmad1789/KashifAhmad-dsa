/*
Leaders in an array
Difficulty Level : Easy
Last Updated : 30 Jun, 2021
Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2. 
Let the input array be arr[] and size of the array be size.
*/
#include <iostream>

using namespace std;
void LeadersInArray(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]<=arr[j])
                break;
                      
        }
         if(j==n){
            cout<<arr[i]<<" ";
            }
    }
   
}
int main() {
   int arr[] = {16,17,4,3,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    LeadersInArray(arr,n);
   return 0;
}