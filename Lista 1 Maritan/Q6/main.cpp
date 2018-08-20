#include <iostream>
#include "Televisao.h"

int main()
{
    Televisao controle;

    std::cout << "Canal: " << controle.getCanal()<< "\tVolume: "<< controle.getVolume() << std::endl;
    controle.setCanal(30);
    std::cout << "Canal: " << controle.getCanal()<< "\tVolume: "<< controle.getVolume() << std::endl;
    controle.aumentaCanal();
    controle.aumentaVolume();
    std::cout << "Canal: " << controle.getCanal()<< "\tVolume: "<< controle.getVolume() << std::endl;
    controle.aumentaVolume();
    controle.aumentaVolume();
    controle.diminuiVolume();
    controle.aumentaCanal();
    controle.aumentaCanal();
    controle.aumentaCanal();
    controle.diminuiCanal();
    std::cout << "Canal: " << controle.getCanal()<< "\tVolume: "<< controle.getVolume() << std::endl;

    return 0;
}
