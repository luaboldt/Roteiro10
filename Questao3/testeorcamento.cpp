#include "testeorcamento.h"

void TesteOrcamento::testeOrcamento(double numero)
{
  if(numero > 5000)
  {
    throw OrcamentoEstouradoException();
  }
}
