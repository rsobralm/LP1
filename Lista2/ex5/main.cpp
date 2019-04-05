#include <iostream>
#include <TestaValidaNumero.h>

int main()
{
    int num;
    TestaValidaNumero *teste = new TestaValidaNumero();

    try{
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> num;
    teste->validaNumero(num);
    }
    catch (ValorAbaixoException &ex1){
        std::cout << "Valor Abaixo" << std::endl;
    }
    catch (ValorAcimaException &ex1){
        std::cout << "Valor Acima" << std::endl;
    }
    catch (ValorMuitoAcimaException &ex1){
        std::cout << "Valor Muito Acima" << std::endl;
    }

    delete teste;
    return 0;
}
