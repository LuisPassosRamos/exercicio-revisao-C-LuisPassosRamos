#include <stdio.h>
//Ler dois inteiros (variáveis A e B) e imprimir o resultado do quadrado da diferença do primeiro valor pelo segundo.
int main() {
    //Declarando variáveis;
    int A, B;
    //Solicitando e guardando o valor das variáveis;
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);
    //Cálculo da diferença e armazenamento do resultado;
    int diferenca = A - B;
    int resultado = diferenca * diferenca;
    //Mostrando resutado ao usuário;
    printf("O quadrado da diferença entre A e B é: %d\n", resultado);

    return 0;
}
