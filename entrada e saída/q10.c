#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresenta��o do valor da convers�o em real de um valor lido em d�lar.
O programa deve solicitar o valor da cota��o do d�lar e tamb�m a quantidade de d�lares dispon�vel com o usu�rio,
para que seja apresentado o valor em moeda brasileira.*/
int main(){
    float real;
    printf ("Digite o valor para convers�o em reais: ");
    scanf("%f", &real);
    float dolar = (5.06*real);

    printf("O valor convertido de reais para d�lares �: %.2f", dolar);

    return 0;
}
