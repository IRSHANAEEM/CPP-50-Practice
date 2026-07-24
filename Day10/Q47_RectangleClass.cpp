#include <iostream>
using namespace std;
class Rectangle{
    public:
    float Length;
    float Width;
    void input(){
        cout<<"Enter Length of Rectangle: ";
        cin>>Length;
        cout<<"Enter Width of Rectangle: ";
        cin>>Width;
    }
    void display(){
    cout<<"----Rectangle Measurement----"<<endl;
    cout<<"Length: "<<Length<<endl;
    cout<<"Width: "<<Width<<endl;
    cout<<"Area: "<<(Length * Width)<<endl;
    cout<<"Perimeter: "<<2*(Length + Width)<<endl;
    }
};
int main(){
Rectangle r1;
r1.input();
r1.display();
return 0;
}