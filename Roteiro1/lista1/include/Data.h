#ifndef DATA_H
#define DATA_H


class Data
{
    private:
        int dia, mes, ano;


    public:
        Data(int dia, int mes, int ano);
        int getDia();
        int getMes();
        int getAno();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        void avancaData(int dia,int mes, int ano);

};

#endif // DATA_H
