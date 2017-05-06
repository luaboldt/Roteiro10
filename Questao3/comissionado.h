#ifndef comissionado_h
#define comissionado_h

#include "funcionarios.h"

#include <iostream>
#include <string>

using namespace std;

class Comissionado: public Funcionarios
{
public:
  double salario;
  double vendasPorSemana;
  double percentualComissao;
public:
  Comissionado(double s_salario, double s_vendasPorSemana, double s_percentualComissao, string s_nome , int s_matricula);
  void setSalario(double s_salario);
  void setVendasPorSemana(double s_vendasPorSemana);
  void setPercentualComissao(double s_percentualComissao);
  double getSalario();
  double getVendasPorSemana();
  double getPercentualComissao();
  virtual double calcularSalario();
  virtual void getDados();
};

#endif
