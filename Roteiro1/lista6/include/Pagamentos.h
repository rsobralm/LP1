#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H


class Pagamentos
{

    private:
        double valorPagamento;
        std::string nomeDoFuncionario;

    public:
        Despesa(double valor, std::string tipodegasto);
        void setValor(double valor);
        void setTipoDeGasto(std::string tipodegasto);
        double getValor();
        std::string getTipoDeGasto();

};

#endif // PAGAMENTOS_H
