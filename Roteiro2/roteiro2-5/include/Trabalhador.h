#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

class Trabalhador
{
   protected:
       std::string nome;
       float salario;

   public:
        Trabalhador(std::string n, float s);
        Trabalhador(std::string n);


};

#endif // TRABALHADOR_H
