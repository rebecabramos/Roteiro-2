#include "relogio.h"
using namespace std;

relogio::relogio()
{
    hora=0;
    minuto=0;
    segundo=0;
}

void relogio::setHorario(int hour, int minute, int second){
    hora=hour;
    minuto=minute;
    segundo=second;
}

int relogio::getHora(){
    return hora;
}

int relogio::getMinuto(){
    return minuto;
}

int relogio::getSegundo(){
    return segundo;
}

void relogio::avancarHorario(){

    segundo++;

    if (segundo == 60){
        segundo = 0;
        minuto++;
    }

    if (minuto == 60){
        minuto = 0;
        hora++;
    }

    if(hora == 24){
        hora=0;
    }
}
