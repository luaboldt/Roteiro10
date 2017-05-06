#ifndef assalariado_h
#define assalariado_h

#include "funcionarios.h"
#include <iostream>
#include <string>

using namespace std;

class Assalariado: public Funcionarios
{
private:
  double salario;
public:
  Assalariado(double s_salario , string s_nome , int s_matricula);
  void setSalario(double s_salario);
  double getSalario();
  virtual double calcularSalario();
  virtual void getDados();
};

#endif
