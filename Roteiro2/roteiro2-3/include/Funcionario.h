#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
    protected:
        std::string nome, matricula;
        float salario;

    public:
        Funcionario();
        Funcionario(std::string n, std::string m, float s);
        void setNome(std::string n);
        void setMatricula(std::string m);
        void setSalario(float s);
        std::string getNome();
        std::string getMatricula();
        float getSalario();

};

#endif // FUNCIONARIO_H
