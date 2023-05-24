//variaveis
int codigo;
float salario, aumento, novo_salario;
string cargo;

// Solicita ao usuário o código do cargo e o salário atual
cout<<"1 - Escrituario\n";
cout<<"2 - Secretario\n";
cout<<"3 - Caixa\n";
cout<<"4- Gerente \n";
cout<< "5- Diretor\n";
cout << "Por favor, informe o código do cargo: ";
cin >> codigo;
cout << "Agora, informe o salário atual: ";
cin >> salario;

// Usa um switch para calcular o aumento de salário com base no código do cargo
switch (codigo) {
    case 1:
        cargo = "Escriturario";
        aumento = salario * 0.5;
        break;
    case 2:
        cargo = "Secretario";
        aumento = salario * 0.35;
        break;
    case 3:
        cargo = "Caixa";
        aumento = salario * 0.2;
        break;
    case 4:
        cargo = "Gerente";
        aumento = salario * 0.1;
        break;
    case 5:
        cargo = "Diretor";
        aumento = 0;
        break;
    default:
        // Caso o código do cargo seja inválido, exibe uma mensagem de erro e encerra o programa
        cout << "Código de cargo inválido!" << endl;
        return 0;
}

// Calcula o novo salário e exibe as informações para o usuário
float novo_salario = salario + aumento;
cout << "Cargo: " << cargo << endl;
cout << "Aumento: R$ " << aumento << endl;
cout << "Novo salário: R$ " << novo_salario << endl;

// Encerra o programa
return 0;
	
	

