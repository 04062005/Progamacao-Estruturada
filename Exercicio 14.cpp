#include<iostream>
#include<locale.h>
#include<string.h>
using namespace std;

//ler 5 vetores  e os mostrar

int main (){
	setlocale(LC_ALL, "Portuguese");
		
	int vetor [5], i;

for (i = 0; i<5;i++){
	cout<<"\nDigite o vetor na "<<i+1<<" posição: ";
	cin>>vetor[i];
}	
system("cls");
for (i= 0; i<5 ;i++){
		cout<<"O vetor da "<<i+1<<" posição é: ";
		cout<<vetor[i]<<"\n";
}

return (0);
}

