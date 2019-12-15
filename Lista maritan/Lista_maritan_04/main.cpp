#include "include/Data.h"
#include <iostream>

using namespace std;

int main(){
    Data *hoje = new Data(24, 11, 2019);
    Data amanha;

    amanha.setAno(2019);
    amanha.setDia(25);
    amanha.setMes(11);

    cout << "Hoje eh: " << hoje->getDia() << "/" << hoje->getMes() << "/" << hoje->getAno() << endl;
    cout << "Amanha eh: " << amanha.getDia() << "/" << amanha.getMes() << "/" << amanha.getAno() << endl;

    hoje->avancarDia();
    amanha.avancarDia();

    cout << "Um dia se passou!!!" << endl;
    cout << "Hoje eh: " << hoje->getDia() << "/" << hoje->getMes() << "/" << hoje->getAno() << endl;
    cout << "Amanha eh: " << amanha.getDia() << "/" << amanha.getMes() << "/" << amanha.getAno() << endl;

    return 0;
}
