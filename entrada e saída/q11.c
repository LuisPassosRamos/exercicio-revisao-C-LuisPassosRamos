#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresenta��o do valor da convers�o em d�lar de um valor lido em real.
O programa deve solicitar o valor da cota��o do d�lar e tamb�m a quantidade de reais dispon�vel com o usu�rio,
para que seja apresentado o valor em moeda americana.*/
int main(){
    //Declara��o das vari�veis;
    float cotacao, reais;
    //Solicitando e guardando valores das vari�veis;
    printf ("Digite o da cota��o do d�lar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em reais para convers�o:");
    scanf("%f", &reais);
    //Declarando a vari�vel de convers�o e realizando o c�lculo;
    float conversao = reais/cotacao;
    //Mostrando o valor convertido para o usu�rio.
    printf("O valor convertido de reais para d�lares �: %.2f", conversao);

    return 0;
}
