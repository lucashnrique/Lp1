#include "Relogio.h"

Relogio::Relogio(){
    hora=minuto=segundo=0;
}
void Relogio::setHorario(int hora,int minuto,int segundo){
    this->hora=hora;
    this->minuto=minuto;
    this->segundo=segundo;
}
int Relogio::getHora(){
    return hora;
}
int Relogio::getMinuto(){
    return minuto;
}
int Relogio::getSegundo(){
    return segundo;
}
void Relogio::avancarHorario(){
    if(segundo<60){
        segundo++;
        if(segundo==60){
            segundo=0;
            minuto++;
            if(minuto==60){
                minuto=0;
                hora++;
                if(hora==24){
                    hora=0;
                }
            }
        }
    }
}
