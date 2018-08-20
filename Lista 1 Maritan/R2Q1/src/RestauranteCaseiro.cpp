#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
}
void RestauranteCaseiro::adcionaAoPedido(int numeroDaMesa,Pedido pedido)
{
    mesas[numeroDaMesa].adcionaAoPedido(pedido);
}
double RestauranteCaseiro::calculaTotalRestaurante()
{
    double totalRestaurante=0;
    for(int i=0;i<100;i++){
        for(int l=0;l<100;l++){
            totalRestaurante+=mesas[i].getPedidos(l).getPreco();
        }
    }
    return totalRestaurante;
}
void RestauranteCaseiro::setMesas(MesaDeRestaurante mesa)
{
    static int k=0;
    mesas[k++]=mesa;
}
