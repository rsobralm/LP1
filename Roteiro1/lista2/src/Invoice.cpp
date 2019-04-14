#include "Invoice.h"

Invoice::Invoice(int numero, int quantidade, float preco,
        string descricao){
    setDesc(descricao);
    setNumero(numero);
    setPreco(preco);
    setQtd(quantidade);
}

void Invoice::setDesc(string descricao){
    this->descricao = descricao;
}
void Invoice::setNumero(int numero){
    this->numero = numero;
}
void Invoice::setQtd(int quantidade){
    if(quantidade < 0)
    this->quantidade = 0;
    else this->quantidade = quantidade;
}
void Invoice::setPreco(float preco){
    if(preco < 0.0)
    this->preco = 0.0;
    else this->preco = preco;
}

string Invoice::getDesc(){
    return descricao;
}
int Invoice::getNumero(){
    return numero;
}
int Invoice::getQtd(){
    return quantidade;
}
float Invoice::getPreco(){
    return preco;
}
float Invoice::getInvoiceAmount(int numero, int quantidade, float preco, string descricao){
    float totalfatura;
    totalfatura = quantidade * preco;
    return totalfatura;

}
