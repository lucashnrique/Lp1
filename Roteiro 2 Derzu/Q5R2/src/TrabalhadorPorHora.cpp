#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(double valorDaHora)
{
    this->valorDaHora=valorDaHora;
}
double TrabalhadorPorHora::calcularPagamentoSemanal(int horas)
{
    double horas1;

    if(horas<=40)
        return horas*valorDaHora;
    if(horas>40)
        horas1=horas-40;
        return (40*valorDaHora)+(horas1*(valorDaHora*1.5));
}
