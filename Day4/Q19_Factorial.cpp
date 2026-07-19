#include <iostream>
using namespace std;
int main(){
    int n,r,Fac=1;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<=n;i++){
    Fac=Fac*i;
}
cout<<"The factorial of "<<n<<" is: "<<Fac;
}