#include "ControleDeGastos.h"
#include "Despesa.h"

void ControleDeGastos::setDespesa(Despesa despesa, int pos)
{
  despesas[pos] = despesa;
}
double ControleDeGastos::calculaTotalDeDespesas()
{
    double soma = 0;
    for(int i = 0; i < 2; i++){
        soma += despesas[i].getValor();
    }
    return soma;
}
bool ControleDeGastos::existeDespesaDoTipo(std::string tipodegasto)
{
       for(int i = 0; i < 2; i++){
        if(despesas[i].getTipoDeGasto() == tipodegasto)
            return true;
    }
    return false;
}


