#include "Consultor.h"

Consultor::Consultor()
{
}
double Consultor::getSalario()
{
    return salario*1.10;
}
double Consultor::getSalario(float percentual)
{
    return salario*(percentual+1);
}
