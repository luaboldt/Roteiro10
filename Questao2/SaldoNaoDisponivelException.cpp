#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException():runtime_error ("Valor de saque maior que o saldo atual"){

}
