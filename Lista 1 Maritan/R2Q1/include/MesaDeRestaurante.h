#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adcionaAoPedido(Pedido pedido);
        void zerarPedidos();
        double calculaTotal();
        Pedido getPedidos(int l);
    private:
        Pedido pedidos[100];
        int j=0;
};

#endif // MESADERESTAURANTE_H
