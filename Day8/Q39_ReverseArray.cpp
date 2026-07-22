#include <iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of Array: ";
cin>>size;
int arr[size];
cout<<"Enter the elements of Array: ";
for(int i=0;i<size;i++){
cin>>arr[i];
}
for(int i=size-1;i>=0;i--){
cout<<arr[i]<<" ";
cout<<endl;
}
return 0;
}
