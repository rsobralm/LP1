#include "Despesa.h"


void Despesa::setValor(double valor)
{
    this->valor = valor;
}
void Despesa::setTipoDeGasto(std::string tipodegasto)
{
    this->tipodegasto = tipodegasto;
}
double Despesa::getValor()
{
    return valor;
}
std::string Despesa::getTipoDeGasto()
{
    return tipodegasto;
}


