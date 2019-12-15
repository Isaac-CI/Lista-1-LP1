#include "Horario.h"

Horario::Horario()
{
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Horario::Horario(short int h, short int m, short int s)
{
    s = s % 60;
    m = m % 60;
    h = h % 24;
    hora = h;
    minuto = m;
    segundo = s;
}

void Horario::setHorario(short int h, short int m, short int s)
{
    s = s % 60;
    m = m % 60;
    h = h % 24;
    hora = h;
    minuto = m;
    segundo = s;
}

short int Horario::getHora()
{
    return hora;
}

short int Horario::getMinuto()
{
    return minuto;
}

short int Horario::getSegundo()
{
    return segundo;
}

void Horario::setHora(short int h)
{
    hora = h % 24;
}

void Horario::setMinuto(short int m)
{
    minuto = m % 60;
}

void Horario::setSegundo(short int s)
{
    segundo = s % 60;
}

void Horario::avancarHorario()
{
    if(segundo == 59)
    {
        segundo = 0;
        if(minuto == 59)
        {
            minuto = 0;
            if(hora == 23)
            {
                hora = 0;
            }else
                hora++;
        }else
            minuto++;
    }else
        segundo++;
}
