#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

int main()
{
    double pagto = 0;
    Despesa d1 = Despesa();
    Despesa d2 = Despesa();
    d1.setTipoDeGasto("Pastel");
    d1.setValor(2321.50);
    d2.setTipoDeGasto("Caldo de Cana");
    d2.setValor(1345.99);
    ControleDeGastos controle = ControleDeGastos();
    controle.setDespesa(d1,0);
    controle.setDespesa(d2,1);

    pagto = controle.calculaTotalDeDespesas();

    std::cout << pagto << std::endl;
    std::cout << controle.existeDespesaDoTipo("Pastel") << std::endl;
    std::cout << controle.existeDespesaDoTipo("Drogas") << std::endl;
    return 0;
}
