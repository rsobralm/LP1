#include "Pagamentos.h"

Pa::Despesa(double valor, std::string tipodegasto)
{
    setValor(valor);
    setTipoDeGasto(tipodegasto);
}

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
