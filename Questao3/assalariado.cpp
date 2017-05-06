#include "assalariado.h"

Assalariado::Assalariado(double s_salario , string s_nome , int s_matricula):
Funcionarios(s_nome , s_matricula)
{
  setSalario(s_salario);
}

void Assalariado::setSalario(double s_salario)
{
  salario = s_salario;
}

double Assalariado::getSalario()
{
  return salario;
}

double Assalariado::calcularSalario()
{
  return getSalario();
}
void Assalariado::getDados()
{
  cout << "\n" << "Nome: " << getNome() << "\n" << "Matricula: "<< getMatricula() << "\n" << "Salario: " << getSalario() << "\n";
}
