#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    private:
        std::string rua, bairro, cidade, estado, cep;
        int numero;
    public:
        Endereco();
        Endereco(std::string r, std::string b, std::string c, std::string uf, std::string cp);
        std::string toString();

};

#endif // ENDERECO_H
