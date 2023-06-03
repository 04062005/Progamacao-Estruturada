#include <iostream>
using namespace std;

int main (){
	//Faça um Programa que escreva na tela os números ímpares de 0 até 80, e a média dos números pares.
	
	int c, par, somador;
	float media;
	
	cout<< "Os numeros impares de 0 a 80 sao: \n";
	somador = 0;
	par = 0;
	
	for (c=0;c<=80;c++){
		
		if(c%2==1){
			
			cout<<"\n"<<c;
		}
		
		if(c%2==0){
			par = par + 1;
			somador = somador + c;	
		}
	}
	media = somador / par;
	
	cout<<"\nA media dos numeros pares e "<< media;
	
	
}
