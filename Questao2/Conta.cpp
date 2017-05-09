#include "IConta.h"
#include "Conta.h"

Conta :: Conta(){
	nomeCliente = "";
    salarioMensal = 0.0;
    numeroConta = 0;
    saldo = 0.0;
}

Conta :: Conta(string s_nome, double d_salario, int i_nconta, double d_saldo){
	nomeCliente = s_nome;
    salarioMensal = d_salario;
    numeroConta = i_nconta;
    saldo = d_saldo;
}

void Conta :: definirLimite(){
	limite = 2*salarioMensal;
}

void Conta :: sacar(double valor) {
			if (saldo >= valor){
			saldo = saldo - valor;
			} else {
			throw SaldoNaoDisponivelException();
			}

}

void Conta :: depositar(double valor){
	saldo = saldo + valor;
}

double Conta :: getLimite(){
	return limite;
}

double Conta :: getSaldo(){
	return saldo;
}

int Conta :: getNumeroConta(){
	return numeroConta;
}

double Conta :: getSalarioMensal(){
	return salarioMensal;
}

void Conta :: setNome(string s_nome){
	nomeCliente = s_nome;
}

void Conta :: setSalarioMensal(double d_salario){
	salarioMensal = d_salario;
}

void Conta :: setNumeroConta(int i_nconta){
	numeroConta = i_nconta;
}

void Conta :: setSaldo(double d_saldo){
	saldo = d_saldo;
}

string Conta :: getNome(){
	return nomeCliente;
}
