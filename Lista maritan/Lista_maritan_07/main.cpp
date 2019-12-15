#include <iostream>
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos badCompany;
    badCompany = ControleDePagamentos();

    for(int i =0; i < 2; i++)
    {
        badCompany.pagamentos[i].valorPagamento = 0
    }

    badCompany.pagamentos[0].setNomeDoFuncionario("Gugu");
    badCompany.pagamentos[0].setValorPagamento(100000);
    badCompany.pagamentos[1].setNomeDoFuncionario("PC");
    badCompany.pagamentos[1].setValorPagamento(10000);

    cout << "O valor total dos pagamentos equivale a: R$" << badCompany.calculaTotalDePagamentos() << endl;
    return 0;
}
