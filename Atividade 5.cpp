#include<iostream>
using namespace std;

int main()
{
//programa 3 numeros ordem crescente, 1 numero ordem aleatoria 
//colocar tudo em ordem decrescente
//variaveis	
int n1, n2, n3, n4;

//entrada de dados
cout<<"digite tres numeros em ordem crescente\n";
cout<<"digite o primeiro numero: ";
cin>>n1;
cout<<"digite segundo numero: ";
cin>>n2;
cout<<"digite o terceiro numero: ";
cin>>n3;
cout<<"agora digite o quarto numero fora dessa ordem: ";
cin>>n4;

//colocando o numero em ordem descrecente 
if(n4>n3)
cout<<n4<<n3<<n2<<n1;

if(n4<n3 && n4>n2)
cout<<n3<<n4<<n2<<n1;

if(n4<n2 && n4>n1)
cout<<n3<<n2<<n4<<n1;

if(n4<n1)
cout<<n3<<n2<<n1<<n4;

}
