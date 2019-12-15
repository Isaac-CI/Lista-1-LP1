#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"


class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        Pagamento pagamentos[2] = Pagamento();
        void setPagamentos(Pagamento, int);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string);

    protected:

    private:
};

#endif // CONTROLEDEPAGAMENTOS_H
