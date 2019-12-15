#include "Data.h"

Data::Data(){}

Data::Data(int a, int b, int c)
{
    dia = a;
    mes = b % 12;
    ano = c;
}

Data::getAno(){
    return ano;
}

Data::getDia(){
    return dia;
}

Data::getMes(){
    return mes;
}

void Data::setAno(int a){
    ano = a;
}

void Data::setDia(int d){
    dia = d;
}

void Data::setMes(int m){
    mes = m;
}

void Data::avancarDia(){
    int aux;
    if(mes == 1 || mes == 3|| mes == 5|| mes == 7|| mes == 8|| mes == 10)
        aux = 1;
    else if(mes == 2 && ano %4 == 0 && ano % 1000 != 0)
        aux = 2;
    else if(mes == 2)
        aux = 3;
    else if(mes == 4 || mes == 6 || mes == 9 || mes ==  11)
        aux = 4;
    else if(mes == 12)
        aux = 5;

    switch(aux){
        case 1:
            if(dia >= 31){
                dia = 1;
                mes++;
            }else dia++;
            break;

        case 2:
            if(dia >= 29){
                dia = 1;
                mes++;
            }else dia++;
            break;

        case 3:
            if(dia >= 28){
                dia = 1;
                mes++;
            }else dia++;
            break;

        case 4:
            if(dia >= 30){
                dia = 1;
                mes++;
            }else dia++;
            break;

        case 5:
            if(dia >= 31){
                dia = 1;
                mes = 1;
                ano++;
            }else dia++;

        default:
            dia = 1;
            mes = 1;
            ano = 2000;
    }
}
