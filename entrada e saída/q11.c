#include<stdio.h>
/*Elaborar um programa que efetue a apresenta��o do valor da convers�o em d�lar de um valor lido em real.
O programa deve solicitar o valor da cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio,
para que seja apresentado o valor em moeda americana.*/
int main(){
    float real;
    printf ("Digite o valor para convers�o em reais: ");
    scanf("%f", &real);
    float dolar = (5.06*real);

    printf("O valor convertido de reais para d�lares �: %.2f", dolar);

    return 0;
}
