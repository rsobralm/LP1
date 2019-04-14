#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"


void RestauranteCaseiro::adicionaAoPedido(Pedido *ped, int pos)
{
   mesarestaurante[pos].adicionaAoPedido(ped);
}

float RestauranteCaseiro::calculaTotalRestaurante()
{
    float soma = 0;
    int i = 0;
    for(i=0; i<20; i++){
        soma += mesarestaurante[i].calculaTotal();
    }
    return soma;
}

MesaDeRestaurante RestauranteCaseiro::getMesa(int pos)
{
    return mesarestaurante[pos];
}
