#include<stdio.h>
#include<stdlib.h>
/*Elaborar um programa que efetue a apresentação do valor da conversão em dólar de um valor lido em real.
O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais disponível com o usuário,
para que seja apresentado o valor em moeda americana.*/
int main(){
    //Declaração das variáveis;
    float cotacao, reais;
    //Solicitando e guardando valores das variáveis;
    printf ("Digite o da cotação do dólar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em reais para conversão:");
    scanf("%f", &reais);
    //Declarando a variável de conversão e realizando o cálculo;
    float conversao = reais/cotacao;
    //Mostrando o valor convertido para o usuário.
    printf("O valor convertido de reais para dólares é: %.2f", conversao);

    return 0;
}
