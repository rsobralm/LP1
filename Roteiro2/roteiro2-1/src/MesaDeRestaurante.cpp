#include "MesaDeRestaurante.h"
#include "Pedido.h"


void MesaDeRestaurante::adicionaAoPedido(Pedido *ped)
{
    for(Pedido *i : pedido){
        if(i->getNumero() == ped->getNumero()){
            i->setQuantidade(i->getQuantidade()+1);
        }
    }
    pedido.push_back(ped);
}


void MesaDeRestaurante::zeraPedidos()
{
    for(Pedido *i: pedido){
        i->setQuantidade(0);
    }
}
float MesaDeRestaurante::calculaTotal()
{
    float soma = 0;
    for(Pedido *i : pedido){
        soma += i->getQuantidade() * i->getPreco();
    }
    return soma;
}
