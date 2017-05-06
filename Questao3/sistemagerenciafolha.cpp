#include "sistemagerenciafolha.h"

void SistemaGerenciaFolha::setFuncionario( Funcionarios * s_funcionario , int ctrl)
{
    funcionarios[ctrl] =  s_funcionario;

}

Funcionarios* SistemaGerenciaFolha::getFuncionarios(int g_indice)
{  
  return funcionarios[g_indice];
}
