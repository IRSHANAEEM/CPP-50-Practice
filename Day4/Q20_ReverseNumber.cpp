#include <iostream>
using namespace std;
int main(){
int num,reminder,revnumber=0;
cout<<"Enter the Number to Reverse: ";
cin>>num;
while(num!=0){
reminder = num % 10;
num=num/10;
revnumber=(revnumber * 10) + reminder;
}
cout<<"Reverse Number: "<<revnumber;
}