#include <iostream>
using namespace std;
int main(){
char str[100];
cout<<"Enter the String: ";
cin.getline(str , 100);
for(int i=0;str[i]!='\0';i++){
if( str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e'|| str[i] == 'I'|| str[i] == 'i'||str[i] == 'O'||str[i] == 'o'||str[i] == 'U' ||str[i] == 'u' ){
    cout<<str[i]<<"  is Vowel"<<endl;
}
else{
    cout<<str[i]<<"  is Consonant"<<endl;
}
}
}