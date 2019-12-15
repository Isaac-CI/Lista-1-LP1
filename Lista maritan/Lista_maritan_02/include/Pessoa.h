#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{
    public:
        Pessoa();
        Pessoa(std::string);
        Pessoa(int, int, std::string);

        std::string nome;
        int idade, telefone;

        void setIdade(int);
        void setTelefone(int);
        void setNome(std::string);

        int getIdade();
        int getTelefone();
        std::string getNome();

    protected:

    private:
};

#endif // PESSOA_H
