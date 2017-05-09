#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"

#include <iostream>
#include <string>

using namespace std;


ContaEspecial::ContaEspecial(){

}

ContaEspecial :: ContaEspecial(string s_nome, double d_salario, int i_nconta, double d_saldo)
: Conta(s_nome, d_salario, i_nconta, d_saldo){

}

void ContaEspecial :: definirLimite(){
	limite = 3*salarioMensal;
}