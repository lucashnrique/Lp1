#include "Pedido.h"

Pedido::Pedido(int numero,std::string descricao,int quantidade,double preco){
    this->numero=numero;
    this->descricao=descricao;
    this->quantidade=quantidade;
    this->preco=preco;
}
Pedido::Pedido()
{
    numero=0;
    descricao="";
    quantidade=0;
    preco=0.0;
}
int Pedido::getNumero()
{
    return numero;
}
void Pedido::setNumero(int numero)
{
    this->numero=numero;
}
std::string Pedido::getDescricao()
{
    return descricao;
}
void Pedido::setDescricao(std::string descricao)
{
    this->descricao=descricao;
}
int Pedido::getQuantidade()
{
    return quantidade;
}
void Pedido::setQuantidade(int quantidade)
{
    this->quantidade=quantidade;
}
double Pedido::getPreco()
{
    return preco;
}
void Pedido::setPreco(double preco)
{
    this->preco=preco;
}
