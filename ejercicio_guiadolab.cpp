#include <iostream>
using namespace std;
int num1=0,num2=1,usuario;
int main(){
cout<<"ingrese numero hasta al que desee ver fibonacci: ";
cin>>usuario;

for(int i = 1;i<=usuario; i++)
{
int suma= num1+ num2;

cout<<suma<<" ";
num1 = num2;
num2 = suma;
}
return 0;
}