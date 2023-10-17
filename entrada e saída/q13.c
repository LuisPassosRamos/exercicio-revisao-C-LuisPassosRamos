#include<stdio.h>
#include<math.h>
/*Elaborar um programa que efetue a leitura de três valores (A,B e C)
e apresente como resultado final o quadrado da soma dos três valores lidos.*/
int main(){
    //Declarando as variáveis;
    float A, B, C;
    //Solicitando e guardando o valor das variáveis;
    printf("Digite o primeiro valor: ");
    scanf("%f", &A);

    printf("Digite o segundo valor: ");
    scanf("%f", &B);

    printf("Digite o terceiro valor: ");
    scanf("%f", &C);
    //Realizando as operações;
    float sqrt_soma = pow((A+B+C),2);
    //Mostrando ao usuário o resultado final.
    printf("A soma dos quadrados dos valores é igual a: %.2f", sqrt_soma);
    return 0;
}
