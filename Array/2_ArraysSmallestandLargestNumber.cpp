#include <iostream>
#include <climits>
using namespace std;

int main()
{
      int n, i;

      int a[100];
      for (i = 0; i < n; i++)
      {
            cin >> a[i];
      }
      int largest = INT_MIN;
      int smallest = INT_MAX;
      for (i = 0; i < n; i++)
      {
            if (a[i] > largest)
            {

                  largest=max(largest, a[i]);
                  smallest=min(smallest, a[i]);
            //       largest = a[i];
            // }

            // if (a[i] < smallest)
            // {

            //       smallest = a[i];
            }
      }
      cout << "largest" << largest << endl;
      cout << "smallest" << smallest << endl;
      return 0;
}