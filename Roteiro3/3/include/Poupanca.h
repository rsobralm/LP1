#ifndef POUPANCA_H
#define POUPANCA_H

#include <Conta.h>


class Poupanca : public Conta
{
    private:
        int variacao;
        double taxaRendimento;

    public:
        Poupanca();
        void setVariacao(int v);
        void setTaxa(double t);
        int getVariacao();
        double getTaxa();
        double render();
        virtual ~Poupanca();


};

#endif // POUPANCA_H
