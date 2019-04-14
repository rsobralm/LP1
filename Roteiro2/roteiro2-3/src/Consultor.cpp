#include "Consultor.h"
#include "Funcionario.h"

Consultor::Consultor(std::string n, std::string m, float s, float percent)
{
    setNome(n);
    setMatricula(m);
    setSalario(s);
    percentual = percent;
}

float Consultor::getSalario()
{
    salario += salario * 0.1;
    return salario;
}

float Consultor::getSalario(float percent)
{
    salario += salario * percent;
    return salario;
}
float Consultor::getPercentual()
{
    return percentual;
}
