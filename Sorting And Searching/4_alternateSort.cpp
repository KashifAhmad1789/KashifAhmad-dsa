/*
Given an array of integers, print the array in such a way that the first element is first maximum and second element is first minimum and so on.
Examples : 
 

Input : arr[] = {7 1 2 3 4 5 6}
Output : 7 1 6 2 5 3 4

Input : arr[] = {1, 6, 9, 4, 3, 7, 8, 2}
Output : 9 1 8 2 7 3 6 4
*/

#include <iostream>

using namespace std;

int main() {
   int n, key, i;
      cin >> n;
      int a[100];
      for (i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      for(int i=0;i<n;i+=2){
          if(i!=0 and a[i]<a[i-1]){
              swap(a[i], a[i-1]);
          }
          if(i!=n-1 and a[i]<a[i+1]){
              swap(a[i],a[i+1]);
          }
      }
      for (i = 0; i < n; i++)
      {
            cout<< a[i]<<" ";
      }
   return 0;
}