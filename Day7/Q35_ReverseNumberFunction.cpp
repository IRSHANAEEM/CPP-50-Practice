#include <iostream>
using namespace std;
int Reverse(int n){
int original,reminder,revnum=0;
original=n;
while(n!=0){
reminder= n % 10;
n = n / 10;
revnum=(revnum*10)+reminder;
}
return reminder;
}
int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
cout<<"Reverse Number: "<<Reverse(num);
}