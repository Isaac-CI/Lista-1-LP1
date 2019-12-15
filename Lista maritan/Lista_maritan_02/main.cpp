#include <string>
#include "include/Pessoa.h"
#include <iostream>

using namespace std;

int main()
{
    string dito;
    int clone, doppelganger;
     Pessoa *pessoa1;
     Pessoa *pessoa2;
     Pessoa *pessoa3;
     Pessoa pessoa4 = Pessoa();

     pessoa1 = new Pessoa(25, 995872314, "Abel");

     pessoa2 = new Pessoa("Benedito");
     pessoa2->setNome("Carlos");
     pessoa2->setIdade(31);
     pessoa2->setTelefone(987865454);

     cout << "Insira o Nome da pessoa:" << endl;
     cin >> dito;
     cout << "Insira a idade da pessoa:" << endl;
     cin >> clone;
     cout << "Insira o Numero de telefone da pessoa:"<< endl;
     cin >> doppelganger;

     pessoa3 = new Pessoa(clone, doppelganger, dito);

     cout << "Insira o Nome da outra pessoa:" << endl;
     cin >> dito;
     cout << "Insira a idade da outra pessoa:" << endl;
     cin >> clone;
     cout << "Insira o Numero de telefone da outra pessoa:"<< endl;
     cin >> doppelganger;

     pessoa4.setIdade(clone);
     pessoa4.setNome(dito);
     pessoa4.setTelefone(doppelganger);

     return 0;
}
