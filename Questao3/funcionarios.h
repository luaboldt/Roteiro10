#ifndef funcionarios_h
#define funcionarios_h

#include <iostream>
#include <string>

using namespace std;

class Funcionarios
{
private:
  string nome;
  int matricula;
public:
  Funcionarios()
  {

  };
  Funcionarios(string s_nome , int s_matricula);
  void setNome(string s_nome);
  void setMatricula(int s_matricula);
  string getNome();
  int getMatricula();
  virtual double calcularSalario();
  virtual void getDados()=0;
};

#endif
