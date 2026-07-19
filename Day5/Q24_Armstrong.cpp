#include <iostream>
using namespace std;
int main(){
    int original,n,rem,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    original=n;
    while(n!=0){
    rem = n % 10;
    sum =sum +(rem*rem*rem);
    n=n/10;
    }
    if (sum == original){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an armstrong Number";
    }
}