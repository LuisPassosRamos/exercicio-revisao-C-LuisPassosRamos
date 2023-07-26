#include <stdio.h>
#include <stdlib.h>

//Crie um programa que contenha uma matriz de float contendo três linhas e três colunas. Imprima o endereço de cada posição dessa matriz.

void main()
{
    float matriz[3][3]; // Declaração da matriz de float com 3 linhas e 3 colunas
    
    // Loop para percorrer as linhas da matriz
    for (int i = 0; i < 3; i++)
    {
        // Loop para percorrer as colunas da matriz
        for (int t = 0; t < 3; t++)
        {
            // Imprime o endereço de memória da posição atual da matriz usando o operador "&"
            printf("| %p |", &matriz[i][t]);
        }
        printf("\n\n"); // Quebra de linha após imprimir os elementos de uma linha
    }
}

