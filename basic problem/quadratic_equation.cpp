#include <iostream>
#include <math.h>
using namespace std;

int main(){
float a,b,c;
int x1,x2;
cin>>a>>b>>c;
float d;
float d1;
d=b*b-4*a*c;
d1=sqrt(d);
if(d==0){
cout<<"the no. is real"<<endl;
}
else if(d>=0){
      cout << "Real and Distinct";
}
else if(d<0)
      cout<<"non real"<<endl;
cout<<endl;
if(d>=0){
      x1 = (-b - d1)/(2*a);
      x2 = (-b + d1)/(2*a);
      cout << x1 << " " << x2;
}
return 0;
}