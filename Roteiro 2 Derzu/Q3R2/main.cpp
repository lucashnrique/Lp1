#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario jojao;
    Consultor pedrao;
    jojao.setMatricula("0012A");
    jojao.setNome("Jorge");
    jojao.setSalario(500.0);
    pedrao.setMatricula("0012B");
    pedrao.setNome("Pedro");
    pedrao.setSalario(500.0);

    cout << jojao.getSalario() << endl;
    cout << pedrao.getSalario() << endl;
    cout << pedrao.getSalario(0.50) << endl;

    return 0;
}
