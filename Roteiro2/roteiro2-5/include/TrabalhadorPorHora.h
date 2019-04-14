#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include <Trabalhador.h>


class TrabalhadorPorHora : public Trabalhador
{
    private:
        float valorDaHora, horas;

    public:
        TrabalhadorPorHora(std::string n, float h, float v);
        float calcularPagamentoSemanal();
};

#endif // TRABALHADORPORHORA_H
