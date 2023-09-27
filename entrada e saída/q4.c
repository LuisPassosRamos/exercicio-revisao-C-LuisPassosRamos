#include<stdio.h>
#include<stdlib.h>

//Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
int main()
{
    //Declarando as variáveis para graus Celsius e para Fahrenheit;
    float f, c;

    //Solicitando e guardando o valor da temperatura em Fahrenheit;
    printf("Digite a temperatura em Fahrenheit.\n");
    scanf("%f",&f);

    //Convertendo o valor guardado de Fahrenheit usando a fórmula de conversão para graus Celsius;
    c=((f-32)*(0.5555555555555556));

    //Retornando o resultado em Celsius;
    printf("%.2f em Celsius é igual a: %.2f \n", f, c);

    return 0;
}
