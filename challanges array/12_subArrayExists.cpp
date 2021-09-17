#include <iostream>

using namespace std;
// bool subArrayExists(int a[], int n)
// {

// }

int main()
{
    int n;
    int a[100] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0;
    int i, j;
    int f = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            s = s + a[j];
            if (s == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
    }
    if(f==1){
        cout<<"yes"<<endl;
    }
else{
    cout<<"no"<<endl;
}
    return 0;
}