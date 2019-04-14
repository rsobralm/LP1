#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"


int main()
{
    double pagto = 0;
    Pagamento f1 = Pagamento();
    Pagamento f2 = Pagamento();
    f1.setNomeDoFuncionario("Joao");
    f1.setValorDoPagamento(500);
    f2.setNomeDoFuncionario("Jose");
    f2.setValorDoPagamento(1350);
    ControleDePagamentos controle = ControleDePagamentos();
    controle.setPagamento(f1,0);
    controle.setPagamento(f2,1);

    pagto = controle.calculaTotalDePagamentos();

    std::cout << pagto << std::endl;
    std::cout << controle.existePagamentoParaFuncionario("Jose") << std::endl;
    std::cout << controle.existePagamentoParaFuncionario("Joao") << std::endl;
    return 0;
}
