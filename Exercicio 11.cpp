#include <iostream>
using namespace std;

int main(){
//Faça um Programa que leia 3 notas escolares de 15 alunos. Para cada um dos alunos calcular e 
//apresentar a média aritmética.

int c, nota1, nota2, nota3,s1,s2,s3,contador;
float media;

s1,s2,s3,nota1,nota2,nota3,contador = 0;

for (c=1; c<=15;c++){
	cout<<"Escreva as notas do "<< c<<"º aluno\n";
	cout<<"Escreva a 1 nota\n";
	cin>>nota1;
	cout<<"Escreva a 2 nota\n";
	cin>>nota2;
	cout<<"Escreva a 3 nota\n";
	cin>>nota3;
	
	contador = contador + 3;
	s1 = s1 + nota1;
	s2 = s2 + nota2;
	s3 = s3 + nota3;
	
	system("cls");	
}
media = (s1 + s2 + s3)/contador;

cout<<"A media da sala e: "<<media;
}


