#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar.
O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário,
para que seja apresentado o valor em moeda brasileira.*/
int main(){
    float real;
    printf ("Digite o valor para conversão em reais: ");
    scanf("%f", &real);
    float dolar = (5.06*real);

    printf("O valor convertido de reais para dólares é: %.2f", dolar);

    return 0;
}
