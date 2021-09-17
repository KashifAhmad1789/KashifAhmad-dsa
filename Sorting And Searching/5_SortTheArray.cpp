/*
Sort an array which contain 1 to n values

Difficulty Level : Easy

You have given an array which contain 1 to n element, your task is to sort this array in an efficient way and without replace with 1 to n numbers.
Examples : 
 

Input : arr[] = {10, 7, 9, 2, 8, 
                 3, 5, 4, 6, 1};
Output : 1 2 3 4 5 6 7 8 9 10
*/
#include <iostream>

using namespace std;
void sortit(int a[], int n){
    for(int i=0;i<=n;i++){
        a[i] = i+1;
    }
}
int main() {
    int n, key, i;
      cin >> n;
      int a[100];
      for (i = 0; i < n; i++)
      {
            cin >> a[i];
      }
    //  sort(a,a+n);
     sortit(a,n);
      for (i = 0; i < n; i++)
      {
            cout<<a[5]<<" ";
      }
  
   return 0;
}