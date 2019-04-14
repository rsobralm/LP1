#include "Endereco.h"

Endereco::Endereco()
{


}

Endereco::Endereco(std::string r, std::string b, std::string c, std::string uf , std::string cp)
{
    rua = r;
    bairro = b;
    cidade = c;
    estado = uf;
    cep = cp;
}

std::string Endereco::toString()
{
    std::string str;
    str = rua + " ";
    str += bairro;
    str += " ";
    str += cidade;
    str += " ";
    str += estado;
    str += " ";
    str += cep;
    return str;
}
