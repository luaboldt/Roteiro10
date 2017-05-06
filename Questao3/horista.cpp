#include "horista.h"

Horista::Horista(double s_salarioPorHora, double s_horasTrabalhadas , string s_nome , int s_matricula):
Funcionarios( s_nome , s_matricula)
{
  Horista::setSalarioPorHora(s_salarioPorHora);
  Horista::setHorasTrabalhadas(s_horasTrabalhadas);
}

void Horista::setSalarioPorHora(double s_salarioPorHora)
{
  salarioPorHora = s_salarioPorHora;
}

void Horista::setHorasTrabalhadas(double s_horasTrabalhadas)
{
  horasTrabalhadas = s_horasTrabalhadas;
}

double Horista::getSalarioPorHora()
{
  return salarioPorHora;
}

double Horista::getHorasTrabalhadas()
{
  return horasTrabalhadas;
}

double Horista::calcularSalario()
{
  double salario;
  if((getHorasTrabalhadas())>40)
    {
      double extra, sal1, sal2, retorno;
      extra = (getHorasTrabalhadas())-(40);
      sal1 = (  (40)*(getSalarioPorHora()));
      sal2 = ((extra)*(getSalarioPorHora()));
      retorno = sal1 + (sal2 * 1.5);
      return retorno;
    }
  if((getHorasTrabalhadas())<(41))
    {
      double retorno;
      retorno = ((getHorasTrabalhadas())*(getSalarioPorHora()));
      return retorno;
    }
}

void Horista::getDados()
{
  cout << "\n" << "Nome: " << getNome() << "\n"<< "Matricula: " << getMatricula() << "\n" << "Salario por hora: " << getSalarioPorHora() << "\n" << "Horas trabalhadas: " << getHorasTrabalhadas() << "\n";
}
