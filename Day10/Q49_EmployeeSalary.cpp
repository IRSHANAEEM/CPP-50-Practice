#include <iostream>
using namespace std;
class Employee{
 public:
int ID;
string name;
int age;
string department;
string designation;
void input(){
cout<<"Enter EmployeeID: ";
cin>>ID;
cout<<"Enter Name of Employee: ";
cin>>name;
cout<<"Enter Age: ";
cin>>age;
cout<<"Enter Deparment: ";
cin>>department;
cout<<"Enter designation: ";
cin>>designation;
} 
void calculateSalary(){
double salary;
double bonus;
cout<<"Enter Salary: ";
cin>>salary;
cout<<"Enter Bonus: ";
cin>>bonus;
salary = salary+bonus;
cout<<"Total salary: "<<salary<<endl;
}
void display(){
    cout<<"----Employee Details----"<<endl;
    cout<<"EmployeeID: "<<ID<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Designation: "<<designation<<endl;
}
};
int main(){
Employee e1;
e1.input();
e1.calculateSalary();
e1.display();
}