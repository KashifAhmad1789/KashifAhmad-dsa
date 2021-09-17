#include <iostream>

using namespace std;

int main() {
   int n ,i, key;
   cin>>n;
   int a[1000];
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   int maximumsum = 0;
   int currentsum = 0;
   int left = -1;
   int right = -1;
   for(i=0;i<n;i++){
       for(int j=i;j<n;j++){
           currentsum = 0;
           for(int k=i;k<=j;k++){
            //    update the maximum sum if currentsum>maximumsum
               currentsum += a[k];
           }
           if(currentsum>maximumsum){
               maximumsum = currentsum;
               left =i;
               right = j;
           }
       }
   }
   cout<<"maximumsum is "<<maximumsum<<endl;
   for(int k=left; k<=right; k++){
       cout<<a[k]<<" ";
   }
   return 0;
}