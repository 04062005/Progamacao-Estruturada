#include <iostream>
#include<locale.h>
#include<string.h>
using namespace std;

//escrever a nota de 7 alunos e achar a media

int main (){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float nota[7],somador=0,media=0;
	
	cout<<"Digite as notas dos alunos: ";
	
	for (i = 0; i<7; i++){
		cout<<"Digite a nota do "<<i+1<<" aluno ";
		cin>>nota [i];
		somador = somador + nota[i];
		
	}
	media = somador/7;
	
	cout<<"A media dos alunos é "<<media;
}
