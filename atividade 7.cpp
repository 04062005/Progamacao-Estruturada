//variaveis
int codigo;
float salario, aumento, novo_salario;
string cargo;

// Solicita ao usu�rio o c�digo do cargo e o sal�rio atual
cout<<"1 - Escrituario\n";
cout<<"2 - Secretario\n";
cout<<"3 - Caixa\n";
cout<<"4- Gerente \n";
cout<< "5- Diretor\n";
cout << "Por favor, informe o c�digo do cargo: ";
cin >> codigo;
cout << "Agora, informe o sal�rio atual: ";
cin >> salario;

// Usa um switch para calcular o aumento de sal�rio com base no c�digo do cargo
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
        // Caso o c�digo do cargo seja inv�lido, exibe uma mensagem de erro e encerra o programa
        cout << "C�digo de cargo inv�lido!" << endl;
        return 0;
}

// Calcula o novo sal�rio e exibe as informa��es para o usu�rio
float novo_salario = salario + aumento;
cout << "Cargo: " << cargo << endl;
cout << "Aumento: R$ " << aumento << endl;
cout << "Novo sal�rio: R$ " << novo_salario << endl;

// Encerra o programa
return 0;
	
	

