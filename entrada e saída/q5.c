#include<stdio.h>
#include<stdlib.h>

//Calcular e apresentar o valor do volume de uma lata de �leo.
int main ()
{
    //Declara��o da vari�vel pi;
    float pi = 3.14;
    //Declara��o das vari�veis r = Raio, h = Altura;
    float r, h;
    //Solicitando e guardando o valor do raio da lata;
    printf("Digite o valor do raio da lata:\n");

    scanf("%f", &r);
    //Solicitando e guardando o valor da altura da lata;
    printf("Digite o valor de altura da lata:\n");

    scanf("%f", &h);
    //Retornando o valor do volume da lata.
    printf("O volume dessa lata � igual a: %f", (pi*(r*r)*h));
    return 0;
}
