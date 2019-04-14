#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    float total;
    Invoice compra = Invoice(1,5,2.50,"tora");
    total = compra.getInvoiceAmount(1,5,2.50,"tora");
    cout << total << endl;
    return 0;
}
