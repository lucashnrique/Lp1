#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
    public:
        Trabalhador();
        Trabalhador(std::string nome,double salario);
        std::string getNome();
        double getSalario();
        void setNome(std::string nome);
        void setSalario(double salario);

    protected:
        std::string nome;
        double salario;
};

#endif // TRABALHADOR_H
