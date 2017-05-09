#ifndef TESTA_VALIDA_NUMERO_H
#define TESTA_VALIDA_NUMERO_H

#include <string>
#include <iostream>
#include <exception>
#include <stdexcept>
#include "ValorPequenoException.h"
#include "ValorMaiorException.h"
#include "ValorGiganteException.h"

class TestaValidaNumero{
private:
public:
	TestaValidaNumero();
    void validaNumero (int);

};
#endif
