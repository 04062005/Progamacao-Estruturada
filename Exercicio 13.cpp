#include <iostream>
using namespace std;

int main (){
	//Fa�a um programa que apresente os n�meros divis�veis por 3 e que estejam entre 4 e 12
	int c = 4;
	cout<<"Os n�meros entre 4 e 12 que s�o divisiveis por 3 sao:";
		for (c = 4; c <=12; c++){
	
		if ( c % 3 == 0){
			cout<<"\n"<< c;
		}
	}
}


