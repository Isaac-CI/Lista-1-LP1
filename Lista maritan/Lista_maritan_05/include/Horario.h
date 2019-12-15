#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        Horario(short int, short int, short int);
        short int getHora();
        short int getMinuto();
        short int getSegundo();
        void setHorario(short int, short int, short int);
        void setHora(short int);
        void setMinuto(short int);
        void setSegundo(short int);
        void avancarHorario();

    protected:
        short int hora, minuto, segundo;

    private:
};

#endif // HORARIO_H
