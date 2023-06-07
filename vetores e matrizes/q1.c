//Crie um programa que leia do teclado seis valores inteiros e em seguida mostra na tela os valores lidos.
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num[6];

    for (int i = 0; i < 6; i++)
    {
        printf ("Digite o número desejado. \n");
        scanf ("%d", &num[i]);
    }

    printf ("Os números digitados foram: \n");
    
    for (int i = 0; i < 6; i++)
    {
        printf ("%d \n", num[i]);
    }
    
}