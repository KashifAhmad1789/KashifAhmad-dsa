#include <iostream>
#include <cstring>
using namespace std;
bool isPalindromic(char a[]){
    int i=0;
    int j =  strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;

        }
        else
        {return false;}
    }
    return true;
}
int main() {
   char a[1000];
   cin.get(a,1000);
   if(isPalindromic(a)){
       cout<<"palindromic";
   }
   else{
       cout<<"not plalindromic";
   }
   return 0;
}