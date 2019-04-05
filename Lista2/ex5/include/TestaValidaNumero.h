#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H

#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"
#include <exception>

class TestaValidaNumero
{
    private:
        int num;

    public:
        TestaValidaNumero();
        void validaNumero(int num);
        virtual ~TestaValidaNumero();
};

#endif // TESTAVALIDANUMERO_H
