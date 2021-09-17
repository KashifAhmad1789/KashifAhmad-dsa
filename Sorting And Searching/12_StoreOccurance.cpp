#include <iostream>

using namespace std;
void AllOccurance(int a[], int i,int n, int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<" ,";
    }
    AllOccurance(a,i+1,n,key);
}
int StoreOOc(int a[],int i,int n,int key,int out[],int j)
{
    if(i==n){
        return j;
    }
    if(a[i]==key){
        out[j] = i;
        // here we increment j
        return StoreOOc(a,i+1,n,key,out,j+1);
    }
    //  here j will be unchanged
    return StoreOOc(a,i+1,n,key,out,j);
}
int main() {
   int a[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 };
    int n = sizeof(a) / sizeof(a[0]);
   
   int i=0;
   int key; cin>>key;
   AllOccurance(a,i,n,key);
   int output[100];
   int cnt = StoreOOc(a,i,n,key,output,0);
   cout<<endl;
   cout<<"count  "<<cnt<<endl;
   for(int k=0;k<cnt;k++){
       cout<<output[k]<<" ";
   }

   return 0;
}