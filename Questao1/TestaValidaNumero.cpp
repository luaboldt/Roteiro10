#include "TestaValidaNumero.h"


TestaValidaNumero::TestaValidaNumero()
{
}

void TestaValidaNumero::validaNumero(int numero){
    if (numero <= 0)
        throw ValorPequenoException();

    if (numero > 100 && numero < 1000)
        throw ValorMaiorException();

    if (numero >= 1000)
        throw ValorGiganteException();

    if (numero > 0 && numero <= 100)
        cout << "Mizeravi acertou!" << endl;
}
