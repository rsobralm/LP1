#ifndef CONTA_H
#define CONTA_H
#include <string>

class Conta
{

    protected:
        std::string nomeCliente;
        int numero;
        double saldo;

    public:
        Conta();
        void sacar(double valor);
        void depositar(double valor);
        void setNome(std::string n);
        void setNumero(int num);
        void setSaldo(double s);
        std::string getNome();
        int getNumero();
        double getSaldo();
        virtual ~Conta();


};

#endif // CONTA_H
