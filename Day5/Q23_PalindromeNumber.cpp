#include <iostream> 
using namespace std;
int main(){
    int num,original,reminder,revnum=0;
    cout<<"Enter the number to check Palindrome: ";
    cin>>num;
    original =num;
    while(num!=0){
    reminder=num % 10;
    revnum=(revnum * 10)+reminder;
    num= num / 10;
    }
    if(original == revnum ) {
    cout<<"It is  a Palindrome Number!";
    }
    else{
        cout<<"It is not a Palindrome Number!";
    }
}