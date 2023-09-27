#include<stdio.h>
#include<stdlib.h>

//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
int main ()
{
    //Declarando as variáveis para graus Celsius e para Fahrenheit;
    float f, c;
    //Solicitando e guardando o valor da temperatura em graus Celsius;
    printf("Digite a temperatura em graus Celsius. \n");

    scanf("%f",&c);
    //Convertendo o valor guardado de Celsius usando a fórmula de conversão para Fahrenheit;
    f=((9*c+160)/5);
    //Retornando o resultado em Fahrenheit;
    printf("%.2f em Fahrenheit é igual a: %.2f \n", c, f);

    return 0;
}
