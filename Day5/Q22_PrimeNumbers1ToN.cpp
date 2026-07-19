#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter the number: ";
    cin>>N;
    for(int i=1;i<=N;i++){
    int count=0;
    for(int j=1;j<=i;j++){
    if(i % j == 0){
    count++;
    }
    }
    if(count == 2){
    cout<<i<<endl;
    }
    }
}