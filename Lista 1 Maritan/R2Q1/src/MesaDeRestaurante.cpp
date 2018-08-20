#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
}
void MesaDeRestaurante::adcionaAoPedido(Pedido pedido)
{
    pedidos[j++]=pedido;
}
void MesaDeRestaurante::zerarPedidos()
{
    for(int i=0;i<j;i++){
        pedidos[i].setNumero(0);
        pedidos[i].setDescricao("");
        pedidos[i].setQuantidade(0);
        pedidos[i].setPreco(0.0);
    }
}
double MesaDeRestaurante::calculaTotal()
{
    double total=0;
    for(int i=0;i<j;i++){
        total+=pedidos[i].getPreco()*pedidos[i].getQuantidade();
    }
    return total;
}
Pedido MesaDeRestaurante::getPedidos(int l)
{
    return pedidos[l];
}
