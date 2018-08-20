#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    public:
        Pedido(int numero,std::string descricao,int quantidade,double preco);
        Pedido();

        int getNumero();
        void setNumero(int numero);
        std::string getDescricao();
        void setDescricao(std::string descricao);
        int getQuantidade();
        void setQuantidade(int quantidade);
        double getPreco();
        void setPreco(double preco);

    private:
        int numero;
        std::string descricao;
        int quantidade;
        double preco;
};

#endif // PEDIDO_H
