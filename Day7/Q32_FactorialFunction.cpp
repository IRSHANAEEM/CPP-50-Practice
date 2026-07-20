#include <iostream> 
using namespace std;
int Factorial(int n){
 int fac=1;
for(int i=1;i<=n;i++){
fac=fac*i;
}
return fac;
}
int main(){
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"The factorial of "<<num<<" is: "<<Factorial(num);
return 0;
}