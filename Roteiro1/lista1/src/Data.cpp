#include "Data.h"

int mes31[] = {1,3,5,7,8,10,12};
int mes30[] = {4,6,9,11};

int checkmes(int mes){
    int i;
    int check = 0;
    for (i = 0; i <= 6;i++){
        if(mes == mes31[i])
            check = 1;
    }
    if(check != 1 && mes != 2)
        return 0;
    else
        return 1;
}

Data::Data(int dia, int mes, int ano){
   dia = ((dia >= 1) && (dia <= 31)) ? dia: 1;
   mes = ((mes >= 1) && (mes <= 12)) ? mes: 1;
   setDia(dia);
   setMes(mes);
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}

void Data::setMes(int mes){
    this->mes = mes;
}

void Data::setAno(int ano){
    this->ano = ano;
}
void Data::avancaData(int dia, int mes, int ano){
    if(mes == 12 && dia == 31){
        ano++;
        dia = 1;
        mes = 1;
    }
else if(mes == 2 && dia == 28){
        dia = 1;
        mes++;
    }
   else if((dia == 30 || dia == 31) && mes != 2 && mes != 12){
    int check = checkmes(mes);
    if(check == 1){
        if(dia == 31){
            dia = 1;
            mes++;
    }
    if(check == 0){
        if(dia == 30)
            dia = 1;
            mes++;
        }
    }
 }
else
    dia++;
setAno(ano);
setDia(dia);
setMes(mes);
}
