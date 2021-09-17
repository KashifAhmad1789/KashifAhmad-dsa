#include <iostream>
#include <climits>
using namespace std;

int main() {
   int n,i;
   int a[1000];
   cin>>n;
   int largest = INT_MIN;
   int smallest = INT_MAX;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
                //    Smallest and lasrgest function of arrays;
//    for(i=0;i<n;i++){
//        if(a[i]>largest){
//            largest=a[i];
//        }
//        if(a[i]<smallest){
//            smallest=a[i];
//        }
//    }


                //    Inbuilt function of largest and smallest of array
for(i=0;i<n;i++){
    largest=max(largest,a[i]);
    smallest=min(smallest,a[i]);
}
   cout<<"largest "<<largest<<endl;
   cout<<"smallest "<<smallest<<endl;
   return 0;
}