#include "Funcionario.h"
#include <iostream>
#include <string>

using namespace std;

Funcionario::Funcionario()
{
    matricula = ' ';
    nome = ' ';
    salario = 0.0;

}
string Funcionario::getmatricula(){
    return matricula;
}

void Funcionario::setmatricula(string m){
    matricula = m;

}

string Funcionario::getnome(){

    return nome;
}

void Funcionario::setnome(string n){
    nome = n;
}

double Funcionario::getsalario(){
    return salario;
}

void Funcionario::setsalario(double s){
    salario = s;
}
