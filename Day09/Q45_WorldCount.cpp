#include <iostream>
using namespace std;
int main(){
    char str[1000];
    int space=0;
    int word=0;
    cout<<"Enter the Sentence: ";
    cin.getline(str , 1000);
    for(int i=0;str[i]!='\0';i++)
    if(str[i]==' '){
     space++;
    }
    word=1+space;
    cout<<"Number of Words in String: "<<word;
}