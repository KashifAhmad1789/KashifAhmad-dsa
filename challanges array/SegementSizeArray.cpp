#include <iostream>

using namespace std;
bool SegmentSizeArray(int arr[], int n, int x, int k)
{
    int i;
    for (i = 0; i < n; i = i + k)
    {

        // Search x in segment starting
        // from index i.
        int j;
        for (j = 0; j < k; j++)
            if (arr[i + j] == x)
                break;

        // If loop didn't break
        if (j == k)
            return false;
    }

    // If n is a multiple of k
    if (i == n)
        return true;

    // Check in last segment if n
    // is not multiple of k.
    int j;
    for (j = i - k; j < n; j++)
        if (arr[j] == x)
            break;
    if (j == n)
        return false;

    return true;
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
    cout << "enter the x value" << endl;
    cin >> x;
    cout << "enter the key value" << endl;
    cin >> k;
    if (SegmentSizeArray(a, n, x, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}