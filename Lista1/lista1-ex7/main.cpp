#include <iostream>
#include "Pessoa.h"

int main()
{
	Pessoa *Torradeira = new Pessoa("ronaldo");
 	Pessoa Geladeira = Pessoa("janaina",666,"666");
 	
	
	
	std::cout << Torradeira->getNome() << std::endl;
	std::cout << Geladeira.getNome() << std::endl;
	std::cout << Geladeira.getIdade() << std::endl;
	std::cout << Geladeira.getTelefone() << std::endl;
	
	delete Torradeira;
}
