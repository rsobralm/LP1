#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data data = Data(1,1,1);
    data.avancaData(31,1,1);
    int mes = data.getMes();
    cout << mes << endl;
    return 0;
}
