#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, float s): Trabalhador(n,s)
{

}

float TrabalhadorAssalariado::calcularPagamentoSemanal()
{
    float pagamento = salario/4;
    return pagamento;
}
