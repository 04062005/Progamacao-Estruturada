#include <iostream>
using namespace std;

int main (){
	//Faça um programa que apresente os números divisíveis por 3 e que estejam entre 4 e 12
	int c = 4;
	cout<<"Os números entre 4 e 12 que são divisiveis por 3 sao:";
		for (c = 4; c <=12; c++){
	
		if ( c % 3 == 0){
			cout<<"\n"<< c;
		}
	}
}


