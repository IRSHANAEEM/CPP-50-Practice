#include <iostream>
using namespace std;
class student{
public:
string Name;
int Age;
int Rollno;
float Marks; 
void input(){
    cout<<"Enter Name: ";
    cin>>Name;
    cout<<"Enter Rollno:  ";
    cin>>Rollno;
    cout<<"Enter the age: ";
    cin>>Age;
    cout<<"Enter Marks: ";
    cin>>Marks;
}
void display(){
    cout<<"----Student Details----"<<endl;
    cout<<"Name: "<<Name<<endl;
    cout<<"RollNo: "<<Rollno<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"Marks: "<<Marks<<endl;
}
};
int main(){
student s1;
s1.input();
s1.display();
}