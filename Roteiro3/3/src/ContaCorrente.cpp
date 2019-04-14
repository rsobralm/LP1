#include "ContaCorrente.h"

ContaCorrente::ContaCorrente()
{
    //ctor
}

void ContaCorrente::setSalario(double s)
{
    salario = s;
}

void ContaCorrente::setLimite(int l)
{
    limite = l;
}

int ContaCorrente::getLimite()
{
    return limite;
}

double ContaCorrente::getSalario()
{
    return salario;
}

double ContaCorrente::definirLimite()
{
    return (salario * 2);
}
ContaCorrente::~ContaCorrente()
{
    //dtor
}
