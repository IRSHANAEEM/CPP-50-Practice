#include <iostream> 
using namespace std;
int main(){
char a[]="Hello World";
int length=0;
for(int i=0;a[i]!='\0';i++){
length++;
}
cout<<"Length of String is: "<<length;
return 0;
}
