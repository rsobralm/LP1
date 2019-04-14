#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"
#include <vector>

class MesaDeRestaurante
{
    private:
        std::vector <Pedido*> pedido;

    public:
        void adicionaAoPedido(Pedido *ped);
        void zeraPedidos();
        float calculaTotal();

};

#endif // MESADERESTAURANTE_H
