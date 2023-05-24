#include<iostream>
using namespace std;

int main (){
int n1;
int n2;
	
cout<<"Ola, irei precisar que voce digite dois numeros\n";
cout<<"Digite o primeiro numero: ";
cin>> n1;
cout<<"Agora digite o segundo numero: ";
cin>> n2;

if( n1 > n2)
{
cout<<"O numero " << n1 << " e maior que o numero "<<n2;
}
else
{
cout<<"O numero " << n2 << " e maior que o numero "<< n1;
}
}
