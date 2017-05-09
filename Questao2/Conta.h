#ifndef CONTA_H
#define CONTA_H

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>
#include "SaldoNaoDisponivelException.h"


using namespace std;

class Conta : public IConta{
private:
    string nomeCliente;
	double numeroConta;
    double saldo;
protected:
    double salarioMensal;
	double limite;
public:
    Conta ();
    Conta (string s_nome, double d_salario, int i_nconta, double d_saldo);
    string getNome();
    void setNome(string s_nome);
    double getSalarioMensal ();
    void setSalarioMensal(double d_salario);
    int getNumeroConta();
    void setNumeroConta(int i_nconta);
    double getSaldo();
    void setSaldo(double d_saldo);
    double getLimite();
    virtual void definirLimite();
    virtual void sacar (double valor);
    virtual void depositar(double valor);
    void main ();

};

#endif
