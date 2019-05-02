#ifndef CLASS_CPP
#define CLASS_CPP
#include "class.h"



Televisao::Televisao()
{
	volume = 24;
	canal = 0;
}

int Televisao::getVolume()
{
	return volume;
}

int Televisao::getCanal()
{
	return canal;
}

void Televisao::setCanal(int c)
{
	canal = c;
}


void Televisao::aumentarVolume()
{
	volume = ++volume > 100 ? 100 : volume;
}


void Televisao::diminuirVolume()
{
	volume = --volume < 0 ? 0 : volume;
}

void Televisao::aumentarCanal()
{
	canal = ++canal > MAXCANAL ? MINCANAL : canal;
}

void Televisao::diminuirCanal()
{
	canal = --canal < MINCANAL ? MAXCANAL : canal;
}

#endif
