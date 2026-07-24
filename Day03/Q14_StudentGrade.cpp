#include <iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter the marks (1-100): ";
cin>>marks;
if(marks>=90 && marks<=100){
    cout<<"Grade : A";
}
else if(marks>=80 && marks<=89){
    cout<<"Grade : B";
}
else if(marks>=70 && marks<=79){
    cout<<"Grade : C";
}
else if(marks>=60 && marks<=69){
    cout<<"Grade : D";
}
else{
    cout<<"Grade : F";
}
}