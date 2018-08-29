#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>


class Funcionario
{
    public:
        Funcionario();
        std::string getmatricula();
        void setmatricula(std::string m);
        std::string getnome();
        void setnome(std::string n);
        double getsalario();
        void setsalario(double s);

    private:
        std::string matricula;
        std::string nome;

    protected:
        double salario;

};

#endif // FUNCIONARIO_H
