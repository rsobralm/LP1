#include "Empregado.h"
#include <string>
Empregado::Empregado(std::string nome, std::string sobrenome, float salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

void Empregado::setNome(std::string nome)
{
    this->nome = nome;
}
void Empregado::setSobrenome(std::string sobrenome)
{
    this->sobrenome = sobrenome;
}
void Empregado::setSalario(float salario)
{
    this->salario = salario < 0 ? 0 : salario;
}
std::string Empregado::getNome()
{
    return nome;
}
std::string Empregado::getSobrenome()
{
    return sobrenome;
}
float Empregado::getSalario()
{
    return salario;
}
