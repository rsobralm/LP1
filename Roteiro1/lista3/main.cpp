#include <iostream>
#include "Empregado.h"


int main()
{
    Empregado Jurandir = Empregado("Jurandir","Silva",900.50);
    Empregado Juricleidson = Empregado("Juricleidson","Santos",1240.15);
    std::cout <<"Empregado: "<< Jurandir.getNome()<<" "<<Jurandir.getSobrenome()<<" Salario: "<<Jurandir.getSalario() << std::endl;
    std::cout <<"Empregado: "<< Juricleidson.getNome()<<" "<<Juricleidson.getSobrenome()<<" Salario: "<<Juricleidson.getSalario() << std::endl;

    Jurandir.setSalario((Jurandir.getSalario()+((Jurandir.getSalario()/100)*10)));
    Juricleidson.setSalario((Juricleidson.getSalario()+((Juricleidson.getSalario()/100)*10)));

    std::cout <<"Empregado: "<< Jurandir.getNome()<<" "<<Jurandir.getSobrenome()<<" Salario: "<<Jurandir.getSalario() << std::endl;
    std::cout <<"Empregado: "<< Juricleidson.getNome()<<" "<<Juricleidson.getSobrenome()<<" Salario: "<<Juricleidson.getSalario() << std::endl;
    return 0;
}
