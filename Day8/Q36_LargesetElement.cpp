#include <iostream> 
using namespace std;
int main(){
int size;
cout<<"Enter the size of array: ";
cin>>size;
int arr[size];
cout<<"Enter the elements of array: ";
for(int i=0;i<size;i++){
 cin>>arr[i];
}
int Largest = arr[0];
for(int j=1;j<size;j++){
    if (arr[j] > Largest){
    Largest = arr[j];
    }
}
cout<<"The Largest element is: "<<Largest;
return 0;
}
