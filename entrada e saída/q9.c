#include <stdio.h>
//Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo.
int main() {
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    int diferenca = A - B;
    int resultado = diferenca * diferenca;

    printf("O quadrado da diferença entre A e B é: %d\n", resultado);

    return 0;
}
