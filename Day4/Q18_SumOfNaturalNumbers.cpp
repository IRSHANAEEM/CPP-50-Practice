#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the positive Number: ";
    cin>>n;
    for (int i=1;i<=n;i++){
    sum+=i;
    }
    cout<<"The sum of the first "<< n <<" Natural numbers is: "<<sum;
}