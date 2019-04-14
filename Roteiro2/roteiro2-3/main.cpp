#include <iostream>
#include <Funcionario.h>
#include <Consultor.h>


int main()
{
    Funcionario f1 = Funcionario("Braia O'Corno", "123456", 500);
    Consultor c1 = Consultor("Vin Etanol", "789456", 500, 0.1);
    std::cout <<"Nome: " <<f1.getNome()<<" Matricula: "<<f1.getMatricula()<<" Salario: "<<f1.getSalario()<<std::endl;
    std::cout <<"Nome: " <<c1.getNome()<<" Matricula: "<<c1.getMatricula()<<" Salario: "<<c1.getSalario()<<std::endl;
    return 0;
}
