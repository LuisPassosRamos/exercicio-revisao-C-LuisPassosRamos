#include<stdio.h>
#include<math.h>
/*Elaborar um programa que efetue a leitura de tr�s valores (A,B e C)
e apresente como resultado final o quadrado da soma dos tr�s valores lidos.*/
int main(){
    //Declarando as vari�veis;
    float A, B, C;
    //Solicitando e guardando o valor das vari�veis;
    printf("Digite o primeiro valor: ");
    scanf("%f", &A);

    printf("Digite o segundo valor: ");
    scanf("%f", &B);

    printf("Digite o terceiro valor: ");
    scanf("%f", &C);
    //Realizando as opera��es;
    float sqrt_soma = pow((A+B+C),2);
    //Mostrando ao usu�rio o resultado final.
    printf("A soma dos quadrados dos valores � igual a: %.2f", sqrt_soma);
    return 0;
}
