#include "../include/Pagamento.h"

Pagamento::Pagamento(){}

Pagamento::getNomeDoFuncionario()
{
    return nomeDoFuncionario;
}

Pagamento::getValorPagamento()
{
    return valorPagamento;
}

Pagamento::setNomeDoFuncionario(std::string str)
{
    nomeDoFuncionario = str;
}

Pagamento::setValorPagamento(double v){
    valorPagamento = v;
}
