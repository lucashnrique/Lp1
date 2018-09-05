#include "Trabalhador.h"

Trabalhador::Trabalhador()
{

}
Trabalhador::Trabalhador(std::string nome, double salario)
{
    this->nome=nome;
    this->salario=salario;
}
std::string Trabalhador::getNome()
{
   return nome;
}

double Trabalhador::getSalario()
{
    return salario;
}
void Trabalhador::setNome(std::string nome)
{
    this->nome=nome;
}

void Trabalhador::setSalario(double salario)
{
    this->salario=salario;
}
