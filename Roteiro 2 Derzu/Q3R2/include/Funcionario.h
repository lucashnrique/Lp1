#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
    protected:
    std::string matricula;
    std::string nome;
    double salario;

    public:
    Funcionario();
    void setMatricula(std::string matricula);
    void setNome(std::string nome);
    void setSalario(double salario);
    std::string getMatricula();
    std::string getNome();
    double getSalario();

};

#endif // FUNCIONARIO_H
