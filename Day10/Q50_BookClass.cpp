#include <iostream>
using namespace std;
class Book{
public:
int ID;
string Title;
string AuthorName;
int Price;
void input(){
    cout<<"Enter the BookID: ";
    cin>>ID;
    cout<<"Enter Title of the Book: ";
    cin>>Title;
    cout<<"Enter AuthorName: ";
    cin>>AuthorName;
    cout<<"Enter the Price: ";
    cin>>Price;
}
void display(){
cout<<"----Book Details----"<<endl;
cout<<"Book ID: "<<ID<<endl;
cout<<"Book Title: "<<Title<<endl;
cout<<"Book AuthorName: "<<AuthorName<<endl;
cout<<"Book Price: "<<Price<<endl;
}
};
int main(){
Book b1;
b1.input();
b1.display();
}