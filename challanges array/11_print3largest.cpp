#include <iostream>
#include<algorithm>
using namespace std;
void print3largest(int a[],int n){
    int i;

    if(n<3){
        cout<<"invalid input"<<endl;
        return;
    }
    int first,second,third;
    third=second=first=INT_MIN;
    for(i=0;i<n;i++){
    if(a[i]>first){
        third=second;
        second=first;
        first=a[i];
    }
    else if(a[i]>second){
        third=second;
        
        second=a[i];
    }
    else{
        third = a[i];
    }
    }
      cout << "Three largest elements are "
        << first << " " << second << " "
        << third << endl;

}
int main() {
   int n,m;
    int a[100]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print3largest(a,n);
   return 0;
}