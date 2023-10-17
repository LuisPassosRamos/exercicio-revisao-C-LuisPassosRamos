#include<stdio.h>
/*Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (variáveis A, B, C e D).
Ao final o programa deve apresentar o resultado do produto (variável P) do primeiro com o terceiro valor,
e o resultado da soma (variável S) do segundo com o quarto valor.*/
int main(){
    //Declaração de variáveis;
    float A, B, C, D;
    //Solicitando e guardando o valor das variáveis;
    printf("Digite o primeiro valor\n");
    scanf("%f", &A);

    printf("Digite o segundo valor\n");
    scanf("%f", &B);

    printf("Digite o tercero valor\n");
    scanf("%f", &C);

    printf("Digite o quarto valor\n");
    scanf("%f", &D);
    //Realizando as operações de soma e multiplicação e retornando os valores.
    float P = (A*C);
    printf("O valor do produto entre o primeiro e terceiro valor é igual a: %.2f\n", P);

    float S = (B+D);
    printf("O valor da soma entre o segundo e quarto valor é igual a: %.2f", S);

    return 0;
}
