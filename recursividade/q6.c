#include <stdio.h>
/*Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros.*/
int somaVetorRecursiva(int vetor[], int n) {
    if (n == 0) {
        return 0; // Caso base: vetor vazio, soma é zero
    }
    return vetor[n - 1] + somaVetorRecursiva(vetor, n - 1); // Caso recursivo
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    int media = somaVetorRecursiva(vetor, tamanho)/tamanho;
    printf("A media dos elementos do vetor é: %d\n", media);

    return 0;
}
