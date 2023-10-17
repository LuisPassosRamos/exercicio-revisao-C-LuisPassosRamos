#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresentação do valor da conversão em real de um valor lido em dólar.
O programa deve solicitar o valor da cotação do dólar e também a quantidade de dólares disponível com o usuário,
para que seja apresentado o valor em moeda brasileira.*/
int main(){
    float cotacao, dolar;

    printf ("Digite o da cotação do dólar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em dólar para conversão:");
    scanf("%f", &dolar);

    float conversao = dolar*cotacao;
    printf("O valor convertido de dólares para reais é: %.2f", conversao);

    return 0;
}
