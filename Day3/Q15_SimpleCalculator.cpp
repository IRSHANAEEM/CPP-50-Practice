#include <iostream>
using namespace std;
int main(){
    double num1,num2,result;
    char op;
    cout<<"Entre the First Number: ";
    cin>>num1;
    cout<<"Enter the Second Number: ";
    cin>>num2;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>op;
    switch(op)
    {
        case '+':
       result = num1 + num2;
       cout<<"Result = " << result;
       break;

       case '-':
       result = num1 - num2;
       cout<<"Result = "<<result;
       break;

       case '*':
       result = num1 * num2;
       cout<<"Result = "<<result;
       break;

       case '/':
       if( num2 !=0 ){
       result = num1 / num2;
       cout<<"Result = "<<result;
       }
       else{
        cout<<"Error! Division by zero is not allowed";
       }
       break;
       default: 
       cout<<"Invalid operator!";
    }
}