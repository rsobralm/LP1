#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <Endereco.h>

class Pessoa
{
    private:
        std::string nome, telefone;
        Endereco endereco;

    public:
        Pessoa();
        Pessoa(std::string nome, Endereco adress, std::string telefone);
        Pessoa(std::string nome);
        void setNome(std::string n);
        void setEndereco(Endereco adress);
        void setTelefone(std::string fone);
        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();

};

#endif // PESSOA_H
