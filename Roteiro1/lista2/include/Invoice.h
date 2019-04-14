#ifndef INVOICE_H
#define INVOICE_H
# include <string>
using namespace std;
class Invoice
{
    private:
        int numero, quantidade;
        float preco;
        string descricao;

    public:
        Invoice(int numero, int quantidade, float preco, string descricao);
        int getNumero();
        int getQtd();
        float getPreco();
        string getDesc();
        void setNumero(int numero);
        void setQtd(int quantidade);
        void setPreco(float preco);
        void setDesc(string descricao);
        float getInvoiceAmount(int numero, int quantidade, float preco, string descricao);

};

#endif // INVOICE_H
