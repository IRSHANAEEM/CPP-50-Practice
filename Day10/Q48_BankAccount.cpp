#include <iostream>
using namespace std;
class Account{
    public:
    int Number;
    string Name;
    double Balance;
    void input(){
        cout<<"Enter Account Number: ";
        cin>>Number;
        cout<<"Enter Account Holder Name: ";
        cin>>Name;
        cout<<"Enter Account Balance: ";
        cin>>Balance;
    }
    void display(){
        cout<<"----Account Details----"<<endl;
        cout<<"Account Number:"<<Number<<endl;
        cout<<"Account Holder Name:"<<Name<<endl;
        cout<<"Account Balance: "<<Balance<<endl;
    }
    void withdrawl(){
        double wthdraw;
        cout<<"----Withdrawl----"<<endl;
        cout<<"Enter Withdrawl Amount: ";
        cin>>wthdraw;
        if(wthdraw <= Balance){
            Balance=Balance-wthdraw;
            cout<<"After Withdrawl Amount: "<<Balance<<endl;
            cout<<"Withdrawl Successfuly!"<<endl;
        }
        else{
            cout<<"Insufficient Balance!";
        }
    }
    void deposit(){
    double dep;
    cout<<"----Deposit----"<<endl;
    cout<<"Enter deposit Amount: ";
    cin>>dep;
    Balance=Balance+dep;
    cout<<"Deposit Amount: "<<Balance<<endl;
    }
};

int main(){
Account a1;
a1.input();
a1.display();
a1.withdrawl();
a1.deposit();

}