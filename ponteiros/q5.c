#include <stdio.h>
#include <stdlib.h>
/*Crie um programa que contenha um array de inteiros contendo cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

void main()
{
    int array[5];
    int *point = array; // Ponteiro apontando para o início do array


    printf("Digite cinco números inteiros:\n");
   
    for (int i = 0; i < 5; i++)
    {
        scanf("%d \n", point + i); // Lendo os valores do array através do ponteiro
    }

    printf("O dobro dos valores lidos é:\n");

    // Imprimindo o dobro dos valores do array através do ponteiro
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(point + i) * 2);
    }

    printf("\n");
}
