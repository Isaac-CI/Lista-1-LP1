#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos(){}

ControleDePagamentos::setPagamentos(Pagamento p, int pos)
{
    pagamentos[pos].valorPagamento = p.valorPagamento;
}

ControleDePagamentos::calculaTotalDePagamentos()
{
    double valor
    for(int i = 0; i < 2; i++)
    {
        valor += pagamentos[i];
    }
    return valor;
}

ControleDePagamentos::existePagamentoParaFuncionario(std::string n)
{
    bool retorno = false;
    for(int i = 0; i < 2; i++)
    {
        if(pagamentos[i].nomeDoFuncionario == n)
            retorno = true;
    }
    return retorno;
}
