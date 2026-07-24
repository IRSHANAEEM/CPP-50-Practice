#include <iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of Array: ";
cin>>size;
int arr[size];
int Sum=0,Avg;
cout<<"Enter the elements of Array: ";
for(int i=0;i<size;i++){
cin>>arr[i];
}
for(int i=0;i<size;i++){
Sum=Sum+arr[i];
}
Avg=Sum/size;
cout<<" Sum = "<<Sum<<endl;
cout<<" Average = "<<Avg<<endl;
}