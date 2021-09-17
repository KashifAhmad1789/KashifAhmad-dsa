#include <iostream>

using namespace std;
void bubble_sort(int a[],int n){
            // N-1 elements to the learge elemnts

    for(int itr=1;itr<n-1;itr++){
        
            //  Pairwise sapping in the unsorted array

        for(int j=0;j<=(n-1-itr); j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main() {
   
   int n ,i, key;
   cin>>n;
   int a[1000];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   bubble_sort(a,n);
   for(i=0;i<n;i++){
       cout<<a[i]<<",";
   }
   return 0;
}