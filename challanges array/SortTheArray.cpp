#include <iostream>
#include <algorithm>
using namespace std;
void sortArr(int a[], int n)
{
    int i, j, min_index;
    for (i = 0; i < n - 1; i++)
    {
        min_index = i;
        for (j = i; j <= n - 1; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        swap(a[i], a[min_index]);
    }
}
    int main()
    {
        int n, k, i, x;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sortArr(a, n);
        for (i = 0; i < n; i++)
        {
            cout << a[i] << ",";
        }
        return 0;
    }