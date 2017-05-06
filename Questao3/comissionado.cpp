#include "comissionado.h"

Comissionado::Comissionado(double s_salario, double s_vendasPorSemana, double s_percentualComissao, string s_nome , int s_matricula):
Funcionarios(s_nome , s_matricula)
{
  setSalario(s_salario);
  setVendasPorSemana(s_vendasPorSemana);
  setPercentualComissao(s_percentualComissao);
}

void Comissionado::setSalario(double s_salario)
{
  salario = s_salario;
}

void Comissionado::setVendasPorSemana(double s_vendasPorSemana)
{
  vendasPorSemana = s_vendasPorSemana;
}

void Comissionado::setPercentualComissao(double s_percentualComissao)
{
  percentualComissao = s_percentualComissao;
}

double Comissionado::getSalario()
{
  return salario;
}

double Comissionado::getVendasPorSemana()
{
  return vendasPorSemana;
}

double Comissionado::getPercentualComissao()
{
  return percentualComissao;
}

double Comissionado::calcularSalario()
{
  double retorno;
  retorno = ((getSalario())+((getVendasPorSemana())*(getPercentualComissao())));
  return retorno;
}

void Comissionado::getDados()
{
  cout << "\n" << "Nome: " << getNome() << "\n" << "Matricula: " << getMatricula() << "\n" << "Salario: " << getSalario() << "\n" << "Vendas por semana: " << getVendasPorSemana() << "\n" << "Percentual: " << getPercentualComissao() << "\n";
}
