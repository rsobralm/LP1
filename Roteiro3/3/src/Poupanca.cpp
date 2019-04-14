#include "Poupanca.h"

Poupanca::Poupanca()
{
    //ctor
}

void Poupanca::setTaxa(double t)
{
    taxaRendimento = t;
}

void Poupanca::setVariacao(int v)
{
    variacao = v;
}

double Poupanca::getTaxa()
{
    return taxaRendimento;
}

int Poupanca::getVariacao()
{
    return variacao;
}

double Poupanca::render()
{
    double rendimento;
    if(variacao == 51)
        rendimento = saldo * taxaRendimento;
    if(variacao == 1)
        rendimento = saldo * (taxaRendimento + 0.5);

    return rendimento;
}

Poupanca::~Poupanca()
{
    //dtor
}
