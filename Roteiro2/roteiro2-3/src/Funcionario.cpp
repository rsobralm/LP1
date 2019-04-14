#include "Funcionario.h"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(std::string n, std::string m, float s)
{
    setNome(n);
    setMatricula(m);
    setSalario(s);
}

void Funcionario::setNome(std::string n)
{
    nome = n;
}

void Funcionario::setMatricula(std::string m)
{
    matricula = m;
}

void Funcionario::setSalario(float s)
{
    salario = s;
}

std::string Funcionario::getNome()
{
    return nome;
}

std::string Funcionario::getMatricula()
{
    return matricula;
}

float Funcionario::getSalario()
{
    return salario;
}
