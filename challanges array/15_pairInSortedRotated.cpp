#include <iostream>

using namespace std;
bool pairInSortedRotated(int a[], int n, int sum)
{
    int i;
    for (i=0; i<n-1; i++)
        if (a[i] > a[i + 1])
        break;

    int l = (i + 1) % n ;
     int r = i;
    while (l != r)
    {
        if (a[l] + a[r] == sum)
            return true;


        if (a[l] + a[r] < sum)
            l = (l + 1) % n;
        else
            r = (n + r - 1) % n;
    }
    return false;
}
int main()
{
 int n,i,sum;
   int a[1000];
   cin>>n;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cin>>sum;
   if (pairInSortedRotated(a, n, sum))
        cout << "Array has two elements with sum 16";
    else
        cout << "Array doesn't have two elements with sum 16 ";
    return 0;
}