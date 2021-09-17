#include <iostream>

using namespace std;
int RemovingDuplicatesArray(int a[],int n){
    int i;
    int j;
    int counter = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
                 
                counter++;
                
            }
        }
    }
    
    cout<<"the no.of the repeating element is"<<endl;
    return counter;
    
}
int main() {
   int n, m, i, x, k;
        cin >> n;
        int a[100];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
       
       cout<<RemovingDuplicatesArray(a,n);
   return 0;
}