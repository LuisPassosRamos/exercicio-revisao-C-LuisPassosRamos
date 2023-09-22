#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Desenvolver a lógica para um programa que efetue o cálculo da área de uma circunferência,
apresentando a medida da área calculada.*/
int main()
{
    //a = área, r = raio, pi = pi (3.14159);
    float a, r, pi;

    //Solicitando e guardando valor do raio ao usuário:
    printf("Digite o valor do raio da circunferência: \n");
    scanf("%f", &r);

    //Atribuição de valor de pi:
    pi=(3.14159);

    //Atribuindo o valor de área seguindo a fórmula: A = pi*R^2
    a=(pi*(r*r));

    //Retornando resultado:
    printf("O valor da área é igual a: %.2f", a);

    return 0;
}
