#include <stdio.h>
//Ler dois inteiros (vari�veis A e B) e imprimir o resultado do quadrado da diferen�a do primeiro valor pelo segundo.
int main() {
    //Declarando vari�veis;
    int A, B;
    //Solicitando e guardando o valor das vari�veis;
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);
    //C�lculo da diferen�a e armazenamento do resultado;
    int diferenca = A - B;
    int resultado = diferenca * diferenca;
    //Mostrando resutado ao usu�rio;
    printf("O quadrado da diferen�a entre A e B �: %d\n", resultado);

    return 0;
}
