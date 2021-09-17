/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
*/
#include <bits/stdc++.h>
using namespace std;


void sortSquares(int arr[], int n)
{
	
	for (int i = 0; i < n; i++)
		arr[i] = arr[i] * arr[i];

	sort(arr, arr + n);
}

int main()
{                                                                              
	int arr[] = { -6, -3, -1, 2, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
        cout<<endl;
	sortSquares(arr, n);

	
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
