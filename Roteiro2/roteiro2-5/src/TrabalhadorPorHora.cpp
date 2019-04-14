#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, float h, float v): Trabalhador(n)
{
    horas = h;
    valorDaHora = v;

}

float TrabalhadorPorHora::calcularPagamentoSemanal()
{
    float horaTrab, pagamento;
    if(horas > 40){
        horaTrab = horas - 40;
        pagamento = ((horaTrab * 1.5) * valorDaHora) + 40 * valorDaHora;
    }
    else
        pagamento = horas * valorDaHora;
    return pagamento;
}
