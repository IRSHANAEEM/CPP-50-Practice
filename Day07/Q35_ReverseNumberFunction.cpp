#include <iostream>
using namespace std;
int Reverse(int n){
int reminder,revnum=0;
while(n!=0){
reminder= n % 10;
n = n / 10;
revnum=(revnum*10)+reminder;
}
return revnum;
}
int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
cout<<"Reverse Number: "<<Reverse(num);
}