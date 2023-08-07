#include <stdio.h>
/*Crie uma fun��o recursiva que retorne a soma dos elementos de um vetor de inteiros.*/
int somaVetorRecursiva(int vetor[], int n) {
    if (n == 0) {
        return 0; // Caso base: vetor vazio, soma � zero
    }
    return vetor[n - 1] + somaVetorRecursiva(vetor, n - 1); // Caso recursivo
}

int main() {
    int vetor[5] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    int soma = somaVetorRecursiva(vetor, tamanho);
    printf("A soma dos elementos do vetor �: %d\n", soma);

    return 0;
}
