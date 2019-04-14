#ifndef DESPESA_H
#define DESPESA_H
#include <string>

class Despesa
{

    private:
        double valor;
        std::string tipodegasto;

    public:
        void setValor(double valor);
        void setTipoDeGasto(std::string tipodegasto);
        double getValor();
        std::string getTipoDeGasto();





};

#endif // DESPESA_H
