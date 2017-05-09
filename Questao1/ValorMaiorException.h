#ifndef VALOR_MAIOR_EXCEPTION_H
#define VALOR_MAIOR_EXCEPTION_H

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>


using namespace std;


class ValorMaiorException : public runtime_error {
public:
	ValorMaiorException();


};
#endif
