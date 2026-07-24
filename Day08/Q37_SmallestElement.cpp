#include <iostream>
using namespace std;
int main(){
int length;
int arr[length];
cout<<"Enter the length of array: ";
cin>>length;
cout<<"Enter the Elements of array: ";
for(int i=0;i<length;i++){
cin>>arr[i];
}
int Smallest = arr[0];
for(int j=1;j<length;j++){
if(arr[j] < Smallest){
    Smallest =arr[j];
}
}
cout<<"The Smallest Element is: "<<Smallest;
return 0;
}
