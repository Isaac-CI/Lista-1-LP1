#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        int dia, mes, ano;
        Data();
        Data(int, int, int);
        int getDia();
        int getMes();
        int getAno();
        void setDia(int);
        void setMes(int);
        void setAno(int);
        void avancarDia();


    protected:

    private:
};

#endif // DATA_H
