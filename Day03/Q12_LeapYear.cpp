#include <iostream>
using namespace std;
int main(){
    int Year;
    cout<<"Enter the Year to check the Leap Year: ";
    cin>>Year;
    if((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0 )){
     cout<<Year<<" is the Leap Year";
    }
    else
{
    cout<<Year<<" is not a Leap Year";
}
}