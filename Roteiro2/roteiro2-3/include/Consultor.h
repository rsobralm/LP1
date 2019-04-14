#ifndef CONSULTOR_H
#define CONSULTOR_H
#include <Funcionario.h>


class Consultor : public Funcionario
{
    private:
        float percentual;


    public:
        Consultor(std::string n, std::string m, float s, float percent);
        float getSalario();
        float getSalario(float percent);
        float getPercentual();

};

#endif // CONSULTOR_H
