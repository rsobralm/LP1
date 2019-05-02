#include <iostream>
#include "class.h"

int main()
{
	Relogio clk = Relogio(14,39,58);

	for(int x = 0; x < 10000; x++)
	{
		clk.avancarHorario();
		std::cout << clk.getHora() << ":" << clk.getMinuto() << ":" << clk.getSegundo() << std::endl;
	}






}
