#include <iostream>
using namespace std;

int main (){
//Um agricultor possui uma certa quantidade de gado em seu pasto. Por�m ele n�o sabe quantos 
//s�o. Ele deseja fazer um cadastro e identificar qual � o animal mais pesado e qual � o mais leve dentre 
//eles. O programa deve registrar um animal de cada vez e a cada itera��o o usu�rio digitar� o peso e o 
//n�mero de identifica��o. 
//No final do procedimento, mostrar:
//� O peso e a identifica��o do animal mais gordo
//� O peso e a identifica��o do animal mais magro
//� A quantidade total de gado.
//� A m�dia do peso do gado.

int registro, maiorpr,menorpr, quantidade;
float peso, maiorpeso ,menorpeso,somapeso, media;
string c;

peso, maiorpeso, menorpeso, somapeso, media = 0;
c = "sim";
cout<<"IDENTIFICADOR DE GADO\n";

while (c == "sim"){
	cout<<"\nDigite o numero de registro do gado: ";
	cin>>registro;
	cout<<"Digite o peso do gado: ";
	cin>>peso;
		if (peso>maiorpeso){
			maiorpeso = peso;
			maiorpr = registro;
		}
		if(peso<menorpeso){
			menorpeso = peso;
			menorpr = registro;
		}
	quantidade = quantidade + 1;
	somapeso = somapeso + peso;
	cout<<"\nDeseja continuar? ";
	cin>>c;
	system("cls");
	
}
media = somapeso/quantidade;

cout<<"O gado "<<maiorpr<<"com "<<maiorpeso<<"KG e o mais pesado\n";
cout<<"O gado "<<menorpr<<"com "<<menorpeso<<"KG e o mais leve\n";
cout<<"A fazenda possui: "<<quantidade<<" gados \n";
cout<<"Com a media de "<<media<<" KG \n";



}
