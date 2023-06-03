#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
//faça um vetor que separe os numeros negativos dos positivos


int main (){
	
	int vetor1[8],vetorpo[8], vetorne[8];
	int i, p, n;
	p=0,n=0;
	for(i=0; i<8;i++){
		cout<<"Digite o "<<i+1 <<" valor da variavel ";
		cin>>vetor1[i];
		
			if (vetor1[i]> 0){
				vetorpo[p] = vetor1[i];
				p++;
					
			}
			else 
				if(vetor1[i] < 0){
				vetorne[n] = vetor1[i];
				n++;
					
	}
	}
	system("cls");
	
	
	cout<<"VALORES POSITIVOS\n";
	for(i=0; i<p;i++){
		cout<<vetorpo[i]<<endl;
	}
	cout<<"VALORES NEGATIVOS\n";
	for(i=0; i<n;i++){
		cout<<vetorne[i]<<endl;
}

}
