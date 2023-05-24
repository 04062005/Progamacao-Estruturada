#include <iostream>
using namespace std;

int main()
{
float h;
string nome ;
int sexo;
float peso;
	
cout<< "ola, digite seu nome:";
cin>> nome;
cout<<"digite sua altura:";
cin>> h;
cout<< "otimo, agora digite seu sexo f/m: ";
cin>>sexo;



if (sexo == 'm')
{
peso = 72.7*h-58;

cout <<"\n"<< nome<<" seu peso ideal e: " << peso ;
}

else
{
peso = 62.1* h -44.7;

cout <<nome <<", seu peso ideal e: " <<peso ;
}

}
