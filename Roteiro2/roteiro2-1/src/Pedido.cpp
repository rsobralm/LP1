#include "Pedido.h"

Pedido::Pedido(int numero, std::string descricao, int quantidade, float preco)
{
    setNumero(numero);
    setDescricao(descricao);
    setQuantidade(quantidade);
    setPreco(preco);
}
Pedido::Pedido()
{
    numero = 5;
    descricao = "tora";
    quantidade = 10;
    preco = 30;
}
void Pedido::setNumero(int numero)
{
    this->numero = numero;
}
void Pedido::setDescricao(std::string descricao)
{
    this->descricao = descricao;
}
void Pedido::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}
void Pedido::setPreco(float preco)
{
    this->preco = preco;
}
int Pedido::getNumero()
{
    return numero;
}
std::string Pedido::getDescricao()
{
    return descricao;
}
int Pedido::getQuantidade()
{
    return quantidade;
}
float Pedido::getPreco()
{
    return preco;
}
