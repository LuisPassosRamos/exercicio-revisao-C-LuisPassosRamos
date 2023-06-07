//Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos na ordem inversa.
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num [6];
    for (int i = 0; i < 6; i++)
    {
        printf ("Digite o número desejado:");
        scanf ("%d", &num[i]);
    }
    printf ("Os números digitados foram:");
    for (int i = 6; i >= 0; i--)
    {
        printf ("%d \n", num[i]);
    }
    
}