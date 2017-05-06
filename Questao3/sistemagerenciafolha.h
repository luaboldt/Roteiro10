#ifndef sistemagerenciafolha_h
#define sistemagerenciafolha_h

#include "funcionarios.h"
#include "assalariado.h"
#include "horista.h"
#include "comissionado.h"

class SistemaGerenciaFolha
{
private:
  Funcionarios * funcionarios[20];
public:
  SistemaGerenciaFolha()
  {

  };
  void setFuncionario(Funcionarios * s_funcionario , int ctrl);
  Funcionarios* getFuncionarios(int g_indice);

};

#endif
