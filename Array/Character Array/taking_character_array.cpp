#include <iostream>

using namespace std;
void readline(char c[],int maxlen, char delim='\n'){
    int i=0;
    char ch = cin.get();
    while(ch!= delim){
        c[i]= ch;
        i++;
        if(i==(maxlen-1)){
            break;
        }
        ch= cin.get();
    }
    c[i]='\0';
    return;
}
int main() {
   char c[1000];
    readline(c,1000,'$');
    cout<<c<<endl;
   return 0;
}