#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
    private:
        MesaDeRestaurante mesarestaurante[20];

    public:
        void adicionaAoPedido(Pedido *ped, int pos);
        float calculaTotalRestaurante();
        MesaDeRestaurante getMesa(int pos);

};

#endif // RESTAURANTECASEIRO_H
