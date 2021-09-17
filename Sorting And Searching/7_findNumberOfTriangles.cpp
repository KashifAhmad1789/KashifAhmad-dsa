/* Count the number of possible triangles
Difficulty Level : Medium
Last Updated : 26 May, 2021
Given an unsorted array of positive integers, find the number of triangles that can be formed with three different array elements as three sides of triangles. For a triangle to be possible from 3 values, the sum of any of the two values (or sides) must be greater than the third value (or third side). 
Examples: 
 

Input: arr= {4, 6, 3, 7}
Output: 3
Explanation: There are three triangles 
possible {3, 4, 6}, {4, 6, 7} and {3, 6, 7}. 
Note that {3, 4, 7} is not a possible triangle.  

Input: arr= {10, 21, 22, 100, 101, 200, 300}.
Output: 6

Explanation: There can be 6 possible triangles:
{10, 21, 22}, {21, 100, 101}, {22, 100, 101}, 
{10, 100, 101}, {100, 101, 200} and {101, 200, 300}
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int findNumberOfTriangles(int a[], int n)
{
    int i, j, k;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                if (a[i] + a[j] > a[k] && a[i] + a[k] > a[j] && a[j] + a[k] > a[i])
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int a[] = {4, 6, 3, 7};

    int n = sizeof(a) / sizeof(a[0]);

    cout << findNumberOfTriangles(a, n);

    return 0;
}
