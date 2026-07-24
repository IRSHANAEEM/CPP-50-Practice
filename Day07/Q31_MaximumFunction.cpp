#include <iostream>
using namespace std;
int Maximum(int a,int b){
if(a > b){
      return a;
}
else{
      return b;
}
}
int main()
{
int num1,num2;
cout<<"Enter the First number: ";
cin>>num1;
cout<<"Enter the Second number: ";
cin>>num2;
cout<<"Maximum number is: "<<Maximum(num1,num2);
return 0;
}