#include <iostream>
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Triangulo triangulo;
    Circulo circulo;
    Quadrado quadrado;

    cout << triangulo.calcularArea(3,4) << endl;
    cout << circulo.calcularArea(2) << endl;
    cout << quadrado.calcularArea(5) << endl;

    return 0;
}
