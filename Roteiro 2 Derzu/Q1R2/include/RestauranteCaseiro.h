#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adcionaAoPedido(int numeroDaMesa,Pedido pedido);
        double calculaTotalRestaurante();
        void setMesas(MesaDeRestaurante mesa);
    private:
        MesaDeRestaurante mesas[100];
};

#endif // RESTAURANTECASEIRO_H
