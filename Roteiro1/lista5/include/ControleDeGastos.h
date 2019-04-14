#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"

class ControleDeGastos
{

    private:
        Despesa despesas[2];



    public:
        void setDespesa(Despesa despesa, int pos);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo(std::string tipodegasto);




};

#endif // CONTROLEDEGASTOS_H
