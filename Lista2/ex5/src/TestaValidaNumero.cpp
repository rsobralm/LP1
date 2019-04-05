#include "TestaValidaNumero.h"

TestaValidaNumero::TestaValidaNumero()
{

}

void TestaValidaNumero::validaNumero(int num)
{
    if(num <= 0)
    {
        ValorAbaixoException ex1;
        throw ex1;
    };
    if(num > 100 && num < 1000)
    {
        ValorAcimaException ex1;
        throw ex1;
    };
    if(num > 1000)
    {
        ValorMuitoAcimaException ex1;
        throw ex1;
    };
}




TestaValidaNumero::~TestaValidaNumero()
{
    //dtor
}
