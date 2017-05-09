#include "ValorPequenoException.h"
#include "ValorMaiorException.h"
#include "ValorGiganteException.h"

#include "TestaValidaNumero.h"

#include <iostream>
#include <string>


using namespace std;

int main (){
    TestaValidaNumero test;

    try { //Testa valor abaixo de 0
        test.validaNumero(-3);
    }

    catch (runtime_error &r){
        cout << "Ocorreu um erro! " << r.what() << endl;
    }

    try { //Testa valor entre 0 e 100
        test.validaNumero(3);
    }

    catch (runtime_error &r){
        cout << "Ocorreu um erro! " << r.what() << endl;
    }

    try { //Testa valor entre 100 e 1000
        test.validaNumero(103);
    }

    catch (runtime_error &r){
        cout << "Ocorreu um erro! " << r.what() << endl;
    }

    try { //Testa valor acima de 1000
        test.validaNumero(1003);
    }

    catch (runtime_error &r){
        cout << "Ocorreu um erro! " << r.what() << endl;
    }

	return 0;
}       
