#ifndef CLASS_CPP
#define CLASS_CPP
#include "class.h"

void Relogio::setHorario(int h, int m, int s)
{
hora = h;
minuto = m;
segundo = s;
}

Relogio::Relogio(int h, int m, int s)
{
setHorario(h, m, s);
}

int Relogio::getHora()
{
return hora;
}

int Relogio::getMinuto()
{
return minuto;
}

int Relogio::getSegundo()
{
return segundo;
}

void Relogio::avancarHorario()
{
segundo = ++segundo > 59 ? 0 : segundo;
if(segundo == 0) minuto++;
minuto = minuto > 59 ? 0 : minuto;
if(minuto == 0 && segundo == 0) hora++;
hora = hora > 23 ? 0 : hora;
}

#endif
