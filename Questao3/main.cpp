#include "funcionarios.h"
#include "assalariado.h"
#include "horista.h"
#include "comissionado.h"
#include "sistemagerenciafolha.h"
#include "funcionarionaoexisteexception.h"
#include "orçamentoestouradoexception.h"
#include "testacadastro.h"
#include "testeorcamento.h"

int menu, ctrl = -1;

SistemaGerenciaFolha sistema;

void apresentaMenu()
{
  cout << "------------------MENU-------------------------------\n\n"
       << "1-----------Adicionar um funcionario assalariado\n"
       << "2-----------Adicionar um funcionario horista\n"
       << "3-----------Adicionar um funcionario comissionado\n"
       << "4-----------Consultar salario de um funcionario\n"
       << "5-----------Calcular valor total da folha\n"
       << "0-----------Sair do programa\n"
       << "Escolha uma das opções do menu: ";
}


int main()
{
  menu = -1;
  while(menu != 0)
  {
    apresentaMenu();
    cin >> menu;
      if(menu == 1)
      {
        if(ctrl==-1)
        {
          ctrl++;
        }
        double sal;
        string nomee;
        int matricul;
        cout << "\nInsira o nome do funcionario: ";
        cin >> nomee;
        cout << "\nInsira o número de matriculo do funcionario: ";
        cin >> matricul;
        cout << "\nInsira o salário do funcionário: ";
        cin >> sal;

        Assalariado * f1 = new Assalariado(sal , nomee  , matricul);
        sistema.setFuncionario(f1 , ctrl);
        ctrl++;
      }

      if(menu == 2)
      {
        if(ctrl==-1)
        {
          ctrl++;
        }
        double salarioPorHora , horasTrabalhadas;
        string nome;
        int matricula;
        cout << "\nInsira o nome do funcionario: ";
        cin >> nome;
        cout << "\nInsira o número de matriculo do funcionario: ";
        cin >> matricula;
        cout << "\nInsira o valor recebido por hora: ";
        cin >> salarioPorHora;
        cout << "\nInsira o numero de horas trabalhadas: ";
        cin >> horasTrabalhadas;

        Horista * f2 = new Horista(salarioPorHora , horasTrabalhadas , nome , matricula);
        sistema.setFuncionario(f2 , ctrl);
        ctrl++;
      }

    if(menu == 3)
    {
      if(ctrl == -1)
      {
        ctrl++;
      }
      string no;
      double salari , vendasps , percentual;
      int matri;
      cout << "\nInsira o nome do funcionario: ";
      cin >> no;
      cout << "\nInsira o número de matriculo do funcionario: ";
      cin >> matri;
      cout << "\nInsira o salario do funcionário: ";
      cin >> salari;
      cout << "\nInsira o número de vendas por semana do funcionário: ";
      cin >> vendasps;
      cout << "\nInsira o percentual de acréscimo: ";
      cin >> percentual;

      Comissionado * f3 = new Comissionado(salari , vendasps , percentual , no , matri);
      sistema.setFuncionario(f3 , ctrl);
      ctrl++;
    }

    if(menu == 4)
    {
      int qualfun;
      cout << "\nInsira o numero do funcionario(ordem de cadastro): ";
      cin >> qualfun;
      if((qualfun>ctrl)||(qualfun-1<=-1))
      {
        try
        {
          TestaCadastro teste;
          teste.testaCadastro(qualfun);
        }
        catch (runtime_error &r)
        {
            cout << "\nOcorreu um erro!\n" << r.what();
        }
      }else{
      cout << "\nO salario do funcionário " << sistema.getFuncionarios(qualfun-1)->getNome() << " é: " << sistema.getFuncionarios(qualfun-1)->calcularSalario() << "\n";
    }
  }

    if(menu == 5)
    {
      int i;
      double valorfolha;
      valorfolha = 0;
      for(i=0; i<ctrl; i++)
      {
        valorfolha += sistema.getFuncionarios(i)->calcularSalario();
      }

      try
      {
        TesteOrcamento teste;
        teste.testeOrcamento(valorfolha);
      }
      catch(runtime_error &r)
      {
          cout << "\nOcorreu um erro!\n" << r.what();
      }
      cout << "\nO valor total da folha é: " << valorfolha << "\n";
    }

  }

  cout << "\nPrograma finalizado!\n";
  return 0;
}
