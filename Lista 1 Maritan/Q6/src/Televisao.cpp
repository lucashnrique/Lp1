#include "Televisao.h"

Televisao::Televisao(){
    canal=1;
    volume=0;
}
void Televisao::aumentaVolume(){
    volume++;
}
void Televisao::aumentaCanal(){
    canal++;
}
void Televisao::diminuiVolume(){
    volume--;
}
void Televisao::diminuiCanal(){
    canal--;
}
void Televisao::setCanal(int canal){
    this->canal=canal;
}
int Televisao::getCanal(){
    return canal;
}
int Televisao::getVolume(){
    return volume;
}
