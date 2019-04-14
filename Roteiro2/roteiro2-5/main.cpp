#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
using namespace std;

int main()
{
    TrabalhadorPorHora tph = TrabalhadorPorHora("Ze do Picadinho", 45, 10);
    TrabalhadorAssalariado ta = TrabalhadorAssalariado("Lula Molusco", 998.98);
    cout << tph.calcularPagamentoSemanal() << endl;
    cout << ta.calcularPagamentoSemanal() << endl;
    return 0;
}
