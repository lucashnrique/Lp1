#include "Pessoa.h"

Pessoa::Pessoa(std::string nome){
    this->nome=nome;
};
Pessoa::Pessoa(std::string nome,Endereco endereco,std::string telefone){
    this->nome=nome;
    this->endereco=endereco;
    this->telefone=telefone;
};
void Pessoa::setNome(std::string nome){
    this->nome=nome;
};
void Pessoa::setEndereco(Endereco endereco){
    this->endereco=endereco;
};
void Pessoa::setTelefone(std::string telefone){
    this->telefone=telefone;
};
std::string Pessoa::getNome(){
    return nome;
};
Endereco Pessoa::getEndereco(){
    return endereco;
};
std::string Pessoa::getTelefone(){
    return telefone;
};
