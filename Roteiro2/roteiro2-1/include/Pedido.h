#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    private:
        int numero, quantidade;
        float preco;
        std::string descricao;
    public:
        Pedido(int numero, std::string descricao, int quantidade, float preco);
        Pedido();
        void setNumero(int numero);
        void setPreco(float preco);
        void setDescricao(std::string descricao);
        void setQuantidade(int quantidade);
        int getNumero();
        float getPreco();
        std::string getDescricao();
        int getQuantidade();

};

#endif // PEDIDO_H
