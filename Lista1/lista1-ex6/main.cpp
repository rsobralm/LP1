#include <iostream>
#include "class.h"

int main()
{
	Televisao *Adilson = new Televisao;
	
	Adilson->setCanal(42);
	
	std::cout << Adilson->getCanal() << std::endl;
	
	Adilson->aumentarCanal();
	std::cout << Adilson->getCanal() << std::endl;
	Adilson->diminuirCanal();
	std::cout << Adilson->getCanal() << std::endl;
	
	Adilson->aumentarVolume();
	std::cout << Adilson->getVolume() << std::endl;

	Adilson->diminuirVolume();
	std::cout << Adilson->getVolume() << std::endl;

	Adilson->aumentarVolume();
	std::cout << Adilson->getVolume() << std::endl;
	
	delete Adilson;
}
