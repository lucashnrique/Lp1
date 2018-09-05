#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"

class Pessoa
{
    private:
    std::string nome;
    Endereco endereco;
    std::string telefone;


    public:
        Pessoa(std::string nome);
        Pessoa(std::string nome,Endereco endereco,std::string telefone);
        void setNome(std::string nome);
        void setEndereco(Endereco endereco);
        void setTelefone(std::string telefone);
        std::string getNome();
        Endereco getEndereco();
        std::string getTelefone();
};

#endif // PESSOA_H
