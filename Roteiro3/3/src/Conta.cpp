#include "Conta.h"
#include <iostream>
Conta::Conta()
{
    //ctor
}

void Conta::setNome(std::string n)
{
    nomeCliente = n;
}

void Conta::setNumero(int num)
{
    numero = num;
}

void Conta::setSaldo(double s)
{
    saldo = s;
}

std::string Conta::getNome()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

void Conta::sacar(double valor)
{
    if(valor > saldo)
        std::cout << "Saldo Insuficiente!" << std::endl;
    else
        saldo -= valor;
}

void Conta::depositar(double valor)
{
    saldo += valor;
}

Conta::~Conta()
{
    //dtor
}
