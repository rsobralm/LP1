#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"


int main()
{
    ContaCorrente *c1 = new ContaCorrente();
    c1->setNome("Jeremias");
    c1->setNumero(123);
    c1->setSalario(1500);
    c1->setSaldo(500);
    std::cout << c1->definirLimite() <<std::endl;
    c1->sacar(600);

    delete c1;

    ContaEspecial *c2 = new ContaEspecial();
    c2->setNome("Juvenal");
    c2->setNumero(555);
    c2->setSalario(15400);
    c2->setSaldo(1450);
    std::cout << c2->definirLimite() <<std::endl;

    delete c2;

    Poupanca *c3 = new Poupanca();
    c3->setNome("Juricleidson");
    c3->setNumero(321);
    c3->setTaxa(0.4);
    c3->setVariacao(51);
    c3->setSaldo(700);
    std::cout << c3->render() << std::endl;

    delete c3;





    return 0;
}
