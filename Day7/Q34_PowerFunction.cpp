#include <iostream>
using namespace std;
int Power(int base,int exponent){
int r=1;
for(int i=1;i<=exponent;i++){
r=r*base;
}
return r;
}
int main(){
int b,e;
cout<<"Enter the base: ";
cin>>b;
cout<<"Enter the exponent: ";
cin>>e;
cout<<b<<" raised to the power "<< e <<" is: "<<Power(b,e);
}