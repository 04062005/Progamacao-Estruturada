#include <iostream>
using namespace std;

int main (){
//Fa�a um Programa que leia 10 valores inteiros e escreva no final a m�dia dos valores lidos.

int c, contador, somador, numero;
float media;

contador, somador = 0;

	for (c= 1; c<=10; c++){
		cout<<"Digite um valor: ";
		cin>> numero;
		contador = contador + 1;
		somador = somador + numero;
	}
	
	media = somador/contador;
	
	cout<<"A media dos numeros e: "<< media;	

}
