#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"



int main()
{
    RestauranteCaseiro restaurante;
    Pedido *p1 = new Pedido(1,"Arroz",1,10);
    Pedido *p2 = new Pedido(2,"Feijao",1,15);
    Pedido *p3 = new Pedido(3,"Bife",1,20);
    restaurante.adicionaAoPedido(p1,0); // método recebe o pedido e o numero da mesa
    restaurante.adicionaAoPedido(p2,0);
    restaurante.adicionaAoPedido(p3,1);
    std::cout << restaurante.calculaTotalRestaurante() << std::endl;
    std::cout << restaurante.getMesa(1).calculaTotal() << std::endl; // calcula total da mesa escolhida
    restaurante.getMesa(1).zeraPedidos();
    std::cout << restaurante.getMesa(1).calculaTotal() << std::endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
