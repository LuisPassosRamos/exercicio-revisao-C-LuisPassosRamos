#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar.
O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário,
para que seja apresentado o valor em moeda brasileira.*/
int main(){
    //Declaração das variáveis;
    float cotacao, dolar;
    //Solicitando e guardando valores das variáveis;
    printf ("Digite o da cotação do dólar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em dólar para conversão:");
    scanf("%f", &dolar);
    //Declarando a variável de conversão e realizando o cálculo;
    float conversao = dolar*cotacao;
    //Mostrando o valor convertido para o usuário.
    printf("O valor convertido de dólares para reais é: %.2f", conversao);

    return 0;
}
