/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int duplicate(int a[], int n){
    int i,j;
    int count=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
           return a[i];
           
                }
                
             
        }
        
    }
    return -1;
    
}
int main()
{
    int n,m;
    int a[100]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<duplicate(a,n);
}
