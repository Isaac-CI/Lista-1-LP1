#ifndef VOO_H
#define VOO_H


class Voo : public Data, public Horario
{
    public:
        Voo(int, Data, Horario);
        int proximoLivre(Voo);
        bool verifica(int, Voo);
        bool ocupa(int, Voo);
        int vagas(Voo);
        int getNumVoo();
        Data getData(Voo);
        Horario getHoraio(Voo);

    protected:
        bool lugares[100];
        int ID;


    private:
};

#endif // VOO_H
