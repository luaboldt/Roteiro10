#include <iostream>
#include <string>

#include "funcionarios.h"

Funcionarios::Funcionarios(string s_nome , int s_matricula)
{
  setNome(s_nome);
  setMatricula(s_matricula);
}

void Funcionarios::setNome(string s_nome)
{
  nome = s_nome;
}

void Funcionarios::setMatricula(int s_matricula)
{
  matricula = s_matricula;
}

string Funcionarios::getNome()
{
  return nome;
}

int Funcionarios::getMatricula()
{
  return matricula;
}

double Funcionarios::calcularSalario()
{

}
