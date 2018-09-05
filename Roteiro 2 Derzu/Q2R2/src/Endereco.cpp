#include "Endereco.h"

Endereco::Endereco(std::string rua,std::string numero,std::string bairro,std::string cidade,std::string estado,std::string cep)
{
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}
Endereco::Endereco(){

};
std::string Endereco::toString(){

    return rua+"-"+numero+"-"+bairro+"-"+cidade+"-"+estado+"-"+cep;
}