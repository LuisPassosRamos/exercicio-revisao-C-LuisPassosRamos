#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresenta��o do valor da convers�o em real de um valor lido em d�lar.
O programa deve solicitar o valor da cota��o do d�lar e tamb�m a quantidade de d�lares dispon�vel com o usu�rio,
para que seja apresentado o valor em moeda brasileira.*/
int main(){
    //Declara��o das vari�veis;
    float cotacao, dolar;
    //Solicitando e guardando valores das vari�veis;
    printf ("Digite o da cota��o do d�lar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em d�lar para convers�o:");
    scanf("%f", &dolar);
    //Declarando a vari�vel de convers�o e realizando o c�lculo;
    float conversao = dolar*cotacao;
    //Mostrando o valor convertido para o usu�rio.
    printf("O valor convertido de d�lares para reais �: %.2f", conversao);

    return 0;
}
