#include <iostream>
#include <locale.h>
#include <string.h>

//criar 2 vetores que somados se tornam um 3 vetor
using namespace std;

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor1[4], vetor2[4], vetor3[4], i;
	
	for(i=0; i<4;i++){
		cout<<"Digite o "<<i+1<<" valor do 1 vetor ";
		cin>>vetor1[i];
		cout<<"\nDigite o "<<i+1<<" valor do 2 vetor ";
		cin>>vetor2[i];
	}
	
	system("cls");
	for(i=0; i<4;i++){
		vetor3[i] = vetor1[i] + vetor2[i];
		cout<<i+1 <<" º valor do 3 vetor: "<< vetor3[i]<<endl;
	}
	
}
