#include <stdlib.h>
#include <iostream>
#include "Relogio.h"

int main()
{
    Relogio cronometro;

    cronometro.setHorario(23,59,58);
    cronometro.avancarHorario();

    std::cout << cronometro.getHora() << ":" << cronometro.getMinuto() << ":" << cronometro.getSegundo() << std::endl;

    while(1){
        cronometro.avancarHorario();
        std::cout << cronometro.getHora() << ":" << cronometro.getMinuto() << ":" << cronometro.getSegundo() << std::endl;
        system("pause");
    }

    return 0;
}
