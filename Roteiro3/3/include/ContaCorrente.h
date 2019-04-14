#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <Conta.h>


class ContaCorrente : public Conta
{
    protected:
        double salario;
        int limite;

    public:
        ContaCorrente();
        void setSalario(double s);
        void setLimite(int l);
        double getSalario();
        int getLimite();
        double definirLimite();
        virtual ~ContaCorrente();




};

#endif // CONTACORRENTE_H
