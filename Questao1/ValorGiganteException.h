#ifndef VALOR_GIGANTE_EXCEPTION_H
#define VALOR_GIGANTE_EXCEPTION_H

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>


using namespace std;


class ValorGiganteException : public runtime_error {
public:
	ValorGiganteException();


};
#endif
