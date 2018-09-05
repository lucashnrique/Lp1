#include "Funcionario.h"

Funcionario::Funcionario()
{

}

void Funcionario::setMatricula(std::string matricula)
{
    this->matricula=matricula;
}

void Funcionario::setNome(std::string nome)
{
    this->nome=nome;
}

void Funcionario::setSalario(double salario)
{
    this->salario=salario;
}

std::string Funcionario::getMatricula()
{
    return matricula;
}

std::string Funcionario::getNome()
{
    return nome;
}

double Funcionario::getSalario()
{
    return salario;
}
