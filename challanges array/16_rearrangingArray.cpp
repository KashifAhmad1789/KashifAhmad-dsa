/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void rearanging(int a[], int n){
    int i,j, temp;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]==i){
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                 break;
            }
            
                
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!= i){
            a[i] = -1;
        }
    }
    cout<<"arrays of rearanging"<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int n,i,key;
   int a[1000];
   cin>>n;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   rearanging(a,n);

   

    return 0;
}
