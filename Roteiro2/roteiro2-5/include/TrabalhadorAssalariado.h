#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include <Trabalhador.h>


class TrabalhadorAssalariado : public Trabalhador
{
    public:
        float calcularPagamentoSemanal();
        TrabalhadorAssalariado(std::string n, float s);

};

#endif // TRABALHADORASSALARIADO_H
