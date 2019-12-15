#include <string>
#include "../include/Pessoa.h"

Pessoa::Pessoa(){}

Pessoa::Pessoa(std::string n)
{
    nome = n;
}
Pessoa::Pessoa(int i, int t, std::string n)
{
    nome = n;
    idade = i;
    telefone = t;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}

void Pessoa::setTelefone(int t)
{
    telefone = t;
}

int Pessoa::getIdade()
{
    return idade;
}

std::string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getTelefone()
{
    return telefone;
}
