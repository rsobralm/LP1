#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::ifstream teste;
    std::ofstream backup;
    std::string dados;

    teste.open("teste.txt");
    backup.open("teste_bkp.txt");
    if(teste.is_open()){
    while(!teste.eof()){
        getline(teste,dados);
        backup << dados;
    }
    teste.close();
    }
    else
        std::cout << "Nao foi possivel abrir\n";

    backup.close();

    return 0;
}
