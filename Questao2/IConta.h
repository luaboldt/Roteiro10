#ifndef ICONTA_H
#define ICONTA_H 

#include <iostream>

using namespace std;

class IConta {
public:
    virtual void sacar (double valor) = 0;
    virtual void depositar(double valor) = 0;        
};

#endif


