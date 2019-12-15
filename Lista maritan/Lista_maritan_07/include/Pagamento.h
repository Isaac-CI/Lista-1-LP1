#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>


class Pagamento
{
    public:
        Pagamento();
        double valorPagamento;
        std::string nomeDoFuncionario;

        std::string getNomeDoFuncionario();
        double getValorPagamento();

        void setNomeDoFuncionario(std::string);
        void setValorPagamento(double);

    protected:

    private:
};

#endif // PAGAMENTO_H
