#include "Consultor.h"
#include "Funcionario.h"
#include <iostream>

using namespace std;

Consultor::Consultor()
{
    salario = 0.0;
}

 double Consultor::getsalario(){
     return salario;

 }

 double Consultor::getSalario(float p){
    double total  = 0;

    total = salario*p;

    return salario + total;
 }

