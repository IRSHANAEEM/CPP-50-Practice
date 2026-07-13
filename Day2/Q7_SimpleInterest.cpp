#include <iostream>
using namespace std;
int main(){
    int P,R,T,SI;
    cout<<"Enter the Principal amount: ";
    cin>>P;
    cout<<"Enter the Rate of Interest: ";
    cin>>R;
    cout<<"Enter the Time(in Years): ";
    cin>>T;
    SI=(P*R*T)/100;
    cout<<"Simple Interest is:  "<<SI; 
}