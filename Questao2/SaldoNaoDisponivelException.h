#ifndef SALDO_NAO_DISPONIVEL_EXCEPTION_H
#define SALDO_NAO_DISPONIVEL_EXCEPTION_H

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>


using namespace std;


class SaldoNaoDisponivelException : public runtime_error {
public:
	SaldoNaoDisponivelException();


};
#endif
