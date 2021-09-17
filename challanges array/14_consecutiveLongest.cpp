#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int LongestConsecutive(int a[], int n){
    int ans = 0;
    int count =0;
    int i, j;
    sort(a,a+n);
    vector <int> v;
    v.push_back(a[0]);
    for(i=0;i<n;i++){
        if(a[i] != a[i-1]){
            v.push_back(a[i]);
        }
    }
    for(i=0;i<v.size();i++){
        if(i>0 && v[i] == v[i-1] + 1)
            count++;
        else
            count = 1;
        
    ans = max(ans,count);
    }
    return ans;
}
int main() {
   int n,i;
   int a[1000];
   cin>>n;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<LongestConsecutive(a,n)<<" "<<endl;
   return 0;
}