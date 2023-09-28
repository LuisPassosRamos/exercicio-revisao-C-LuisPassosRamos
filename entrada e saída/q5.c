#include<stdio.h>
#include<stdlib.h>

//Calcular e apresentar o valor do volume de uma lata de óleo.
int main ()
{
    //Declaração da variável pi;
    float pi = 3.14;
    //Declaração das variáveis r = Raio, h = Altura;
    float r, h;
    //Solicitando e guardando o valor do raio da lata;
    printf("Digite o valor do raio da lata:\n");

    scanf("%f", &r);
    //Solicitando e guardando o valor da altura da lata;
    printf("Digite o valor de altura da lata:\n");

    scanf("%f", &h);
    //Retornando o valor do volume da lata.
    printf("O volume dessa lata é igual a: %f", (pi*(r*r)*h));
    return 0;
}
