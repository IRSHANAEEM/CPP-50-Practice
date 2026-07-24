#include <iostream>
using namespace std;
int main(){
char str[100];
int length=0;
string rev="";
cout<<"Enter the string: ";
cin.getline(str,100);
while (str[length] != '\0'){
    length++;
}
for(int i=length-1;i>=0;i--){
cout<<str[i];
rev+=str[i];
}
if(string(str)==rev){
    cout<<" String is Palindrome ";
}
else{
    cout<<" String is not palindrom ";
}
}
