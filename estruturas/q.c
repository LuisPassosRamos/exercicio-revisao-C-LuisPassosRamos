#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct data criaData(int dia, int mes, int ano){
    struct data novaData;
    novaData.dia = dia;
    novaData.mes = mes;
    novaData.ano = ano;
    return novaData;
}

void escrevaData(struct data d){
    printf("%d/%d/%d",d.dia, d.mes,d.ano);
}
char* stringData(struct data d){
    char* string;
    sprintf(string,"%d/%d/%d",d.dia, d.mes,d.ano);
    return string;
}
int main(){
    struct data inicio, fim;
    inicio = criaData(1,1,2020);
    fim = criaData(1,1,2022);
    
    printf("inicio %s e fim %s", stringData(inicio), stringData(fim));

    return 0;
}
