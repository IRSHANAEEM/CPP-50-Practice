#include <iostream>
using namespace std;
int main(){
int num1,num2,tem3;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter th second number: ";
cin>>num2;
num1=num2;
tem3=num1;
num2=tem3;
cout<<"After Swapping";
cout<<"First number = "<<num1;
cout<<"Second number = "<<num2;
return 0;
}