#include <iostream>
using namespace std;

int main() {
  float n1, n2, n3, ne, m,e1,e2,e3;
  
  // solicita as notas do aluno
  cout << "Digite a primeira nota do aluno: ";
  cin >> n1;
  cout << "Digite a segunda nota do aluno: ";
  cin >> n2;
  cout << "Digite a terceira nota do aluno: ";
  cin >> n3;
  
  // calcula a média
  m = (n1 + n2 + n3) / 3;
  
  // verifica a situação do aluno
  if (m >= 6) {
    cout << "A nota do aluno e " << m << ", aprovado";
  }
  else if (m >= 3) {
    cout << "Exame\n";
    cout << "Digite a nota do exame: ";
    cin >> e1;
    cout<< "digite a segunda nota do exame: ";
    cin>> e2;
    cout<< "digite a terceira nota do exame: ";
    cin>> e3;
    m = ( e1+e2+e3) / 3 - 2;
    if (m >= 5) {
      cout << "A nota do aluno e  "<< m <<", aprovado";
    }
    else {
      cout <<"A nota do aluno e "<< m << ", reprovado";
    }
  }
  else {
    cout << "A nota do aluno" << m << "Reprovado";
  }
  
  return 0;
}


