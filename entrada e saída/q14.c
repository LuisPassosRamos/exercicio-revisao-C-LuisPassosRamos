#include<stdio.h>
/*Elaborar um programa de computador que efetue a leitura de quatro valores inteiros (vari�veis A, B, C e D).
Ao final o programa deve apresentar o resultado do produto (vari�vel P) do primeiro com o terceiro valor,
e o resultado da soma (vari�vel S) do segundo com o quarto valor.*/
int main(){
    //Declara��o de vari�veis;
    float A, B, C, D;
    //Solicitando e guardando o valor das vari�veis;
    printf("Digite o primeiro valor\n");
    scanf("%f", &A);

    printf("Digite o segundo valor\n");
    scanf("%f", &B);

    printf("Digite o tercero valor\n");
    scanf("%f", &C);

    printf("Digite o quarto valor\n");
    scanf("%f", &D);
    //Realizando as opera��es de soma e multiplica��o e retornando os valores.
    float P = (A*C);
    printf("O valor do produto entre o primeiro e terceiro valor � igual a: %.2f\n", P);

    float S = (B+D);
    printf("O valor da soma entre o segundo e quarto valor � igual a: %.2f", S);

    return 0;
}
