#ifndef funcionario_nao_existe_exception_h
#define funcionario_nao_existe_exception_h

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
using namespace std;

class FuncionarioNaoExisteException : public runtime_error
{
public:
  FuncionarioNaoExisteException();

};

#endif
