#ifndef orcamento_estourado_exception_h
#define orcamento_estourado_exception_h

#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
using namespace std;

class OrcamentoEstouradoException : public runtime_error
{
public:
  OrcamentoEstouradoException();

};

#endif
