#include "Horario.h"
#include <iostream>

using namespace std;

int main()
{
    Horario *relogioAnalogico = new  Horario();
    Horario relogioDigital = Horario(12, 30, 30);

    cout << relogioAnalogico->getHora() << "/" << relogioAnalogico->getMinuto() << "/" << relogioAnalogico->getSegundo() << endl;

    relogioAnalogico->setHorario(21,54,59);

    cout << relogioAnalogico->getHora() << "/" << relogioAnalogico->getMinuto() << "/" << relogioAnalogico->getSegundo() << endl;

    cout << relogioDigital.getHora() << "/" << relogioDigital.getMinuto() << "/" << relogioDigital.getSegundo() << endl;

    relogioDigital.avancarHorario();

    cout << relogioDigital.getHora() << "/" << relogioDigital.getMinuto() << "/" << relogioDigital.getSegundo() << endl;

    return 0;
}
