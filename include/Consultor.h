#ifndef CONSULTOR_H
#define CONSULTOR_H
#include "Funcionario.h"


class Consultor: public Funcionario
{
    public:
        Consultor();
        double getsalario();
        double getSalario(float percentual);

    private:
};

#endif // CONSULTOR_H
