#include <iostream>
using namespace std;
int main(){
int size;
int SearchElement;
cout<<"Enter the Size of Array: ";
cin>>size;
int arr[size];
cout<<"Enter the elements of array: ";
for(int i=0;i<size;i++){
  cin>>arr[i];
}
cout<<"Enter the Element to Search: ";
cin>>SearchElement;
int found = 0;
for(int i=0;i<size;i++){
if( SearchElement == arr[i] ){
cout<<"Element found at Position: "<<i+1;
found = 1;
break;
}}
if(found == 0){
    cout<<"Element not found";
}
return 0;
}