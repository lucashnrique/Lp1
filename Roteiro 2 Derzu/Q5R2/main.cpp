#include <iostream>
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

int main()
{
    TrabalhadorAssalariado joao;
    TrabalhadorPorHora marcos(20);
    joao.setSalario(1500);

    std::cout << joao.calcularPagamentoSemanal()<< std::endl;
    std::cout << marcos.calcularPagamentoSemanal(45)<< std::endl;

    return 0;
}
