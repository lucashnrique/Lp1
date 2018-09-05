#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    private:
        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;

    public:
        Endereco(std::string rua,std::string numero,std::string bairro,std::string cidade,std::string estado,std::string cep);
        Endereco();
        std::string toString();
};

#endif // ENDERECO_H
