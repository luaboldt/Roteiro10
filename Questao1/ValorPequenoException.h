#ifndef VALOR_PEQUENO_EXCEPTION_H
#define VALOR_PEQUENO_EXCEPTION_H

#include <string>
#include <iostream>

#include <exception>
#include <stdexcept> //biblioteca runtime_error


using namespace std;


class ValorPequenoException : public runtime_error {
public:
	ValorPequenoException();



};
#endif
