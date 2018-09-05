#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora:public Trabalhador
{
    public:
        TrabalhadorPorHora(double valorDaHora);
        double calcularPagamentoSemanal(int horas);

    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
