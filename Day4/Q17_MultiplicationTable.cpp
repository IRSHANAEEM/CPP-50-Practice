#include <iostream>
using namespace std;
int main(){
    int n,rez=1;
    cout<<"Enter the number for Table: ";
    cin>>n;
    for(int i=1;i<=10;i++){
    rez=n*i;
    cout<< n << "*" << i << "=" << rez <<endl;
}
}