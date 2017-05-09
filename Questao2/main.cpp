#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include "SaldoNaoDisponivelException.h"

#include <iostream>
#include <string>

int main(){
	string cliente;
	double numCta;
    double sld;
    double salMes;
	double saque;
	double deposito;

	cout << "Bem vindo ao programa Conta" << endl;

	cout << "Vamos criar uma conta convencional" << endl;

	cout << endl << "Informe seu nome: ";
	cin >> cliente;
	cout << endl << "Infome seu numero da conta: ";
	cin >> numCta;
	cout << endl << "Informe seu saldo atual: ";
	cin >> sld;
	cout << endl << "Informe seu salario mensal: ";
	cin >> salMes;

	Conta cconvencional (cliente, salMes, numCta, sld);

	cout << endl << "Foi definido uma conta convencional para você" << endl;

	cout << endl << "Agora vamos testar alguns metodos dessa classe, como sacar, depositar e definir limite!" << endl;

	cout << endl << "Informe um valor para saque: ";
	cin >> saque;

	try {
			 cconvencional.sacar(saque);
	}

	catch (runtime_error &r){
			 cout << "Ocorreu um erro! " << r.what() << endl;
	}


	cout << endl << "Informe um valor para deposito: ";
	cin >> deposito;
	cconvencional.depositar(deposito);
	cout << endl << "Deposito realizado com sucesso" << endl;

	cout << endl << "Definindo limite com base no seu salario mensal";
	cconvencional.definirLimite();
	cout << endl << "Limite definido com sucesso";

	cout << endl << endl << "Vamos criar agora uma conta especial" << endl;

	cout << endl << "Informe seu nome: ";
	cin >> cliente;
	cout << endl << "Infome seu numero da conta: ";
	cin >> numCta;
	cout << endl << "Informe seu saldo atual: ";
	cin >> sld;
	cout << endl << "Informe seu salario mensal: ";
	cin >> salMes;

	ContaEspecial cespecial (cliente, salMes, numCta, sld);

	cout << endl << "Foi definido uma conta especial para você" << endl;

	cout << endl << "Agora vamos testar alguns metodos dessa classe, como sacar, depositar e definir limite!" << endl;

	cout << endl <<"Informe um valor para saque: ";
	cin >> saque;
	try {
			 cespecial.sacar(saque);
	}

	catch (runtime_error &r){
			 cout << "Ocorreu um erro! " << r.what() << endl;
	}

	cout << endl << "Informe um valor para deposito: ";
	cin >> deposito;
	cespecial.depositar(deposito);
	cout << endl << "Deposito realizado com sucesso" << endl;

	cout << endl << "Definindo limite com base no seu salario mensal";
	cespecial.definirLimite();
	cout << endl << "Limite definido com sucesso";

	return 0;

}
