#include "Pessoa.h"
#include "Endereco.h"


Pessoa::Pessoa(std::string n, Endereco adress, std::string fone)
{
    setNome(n);
    setEndereco(adress);
    setTelefone(fone);

}

Pessoa::Pessoa(std::string n)
{
    setNome(n);
}

std::string Pessoa::getNome()
{
    return nome;
}
Endereco Pessoa::getEndereco()
{
    return endereco;
}
std::string Pessoa::getTelefone()
{
    return telefone;
}
void Pessoa::setNome(std::string n)
{
    nome = n;
}
void Pessoa::setEndereco(Endereco adress)
{
    endereco = adress;
}

void Pessoa::setTelefone(std::string fone)
{
    telefone = fone;
}

