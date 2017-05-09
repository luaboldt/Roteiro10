#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>
#include "SaldoNaoDisponivelException.h"

using namespace std;

class ContaEspecial : public Conta{
public:
    ContaEspecial ();
    ContaEspecial(string s_nome, double d_salario, int i_nconta, double d_saldo);
    virtual void definirLimite();
};

#endif
