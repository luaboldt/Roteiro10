#ifndef horista_h
#define horista_h

#include "funcionarios.h"

#include <iostream>
#include <string>

using namespace std;

class Horista: public Funcionarios
{
private:
  double salarioPorHora;
  double horasTrabalhadas;
public:
  Horista()
  {

  };
  Horista(double s_salarioPorHora, double s_horasTrabalhadas , string s_nome , int s_matricula);
  void setSalarioPorHora(double s_salarioPorHora);
  void setHorasTrabalhadas(double s_horasTrabalhadas);
  double getSalarioPorHora();
  double getHorasTrabalhadas();
  virtual double calcularSalario();
  virtual void getDados();

};

#endif
