#include "Data.h"
#include "Horario.h"
#include <string>
#include "Voo.h"

Voo::Voo(int id, Data d, Horario h)
{
    ID = id;
    Data = d;
    Horario = h;
    for(int i = 0; i < 100; i++)
    {
       lugares[i] = false;
    }
}

Voo::proximoLivre(Voo v)
{
    int i = 0;
    while(v.lugares[i] == true)
    {
        i++;
    }
    return i;
}

bool Voo::verifica(int i, Voo v)
{
    if(v.lugares[i - 1] == false)
        return true;
    else
        return false;
}

bool Voo::ocupa(int i, Voo v)
{
    if(v.lugares[i - 1] == false)
    {
        v.lugares[i - 1] = true;
        return true;
    }else
        return false;
}

int Voo::vagas(Voo v)
{
    int c = 0;
    for(int i = 0; i < 100; i++)
    {
        if(v.lugares[i] == false)
            c++;
    }
    return c;
}

int Voo::getNumVoo()
{
    return ID;
}

Data Voo::getData(Voo v)
{
    return v.Data;
}
Horario Voo::getHoraio(Voo v)
{
    return v.Horario;
}
