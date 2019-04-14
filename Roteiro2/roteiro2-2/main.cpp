#include <iostream>
#include <Endereco.h>
#include <Pessoa.h>


int main()
{
    Endereco log1 = Endereco("Rua da Macaxeira","Tibiri 32", "Cacimba de Dentro", "Acre", "00000-000");
    Endereco log2 = Endereco("Rua do Cajueiro","Santantonho", "Atalaia", "Alagoas", "00002-000");
    Pessoa p1 = Pessoa("Edvaldo Preda", log1, "98892-3208");
    Pessoa p2 = Pessoa("Cleitu Rasta", log2, "98892-3207");
    std::cout << "Nome: "<< p1.getNome() << " Endereco: "<< p1.getEndereco().toString() <<" Telefone: "<< p1.getTelefone() << std::endl;
    std::cout << "Nome: "<< p2.getNome() << " Endereco: "<< p2.getEndereco().toString() <<" Telefone: "<< p2.getTelefone() << std::endl;
    return 0;
}
