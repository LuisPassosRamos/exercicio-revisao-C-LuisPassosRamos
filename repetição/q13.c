#include <stdio.h>
#include <stdlib.h>
//Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que são múltiplos de 3 ou 5.

int main()
{
    float soma = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (((i % 3) == 0) || ((i % 5) == 0)){
            soma += i;
        }
    }
    printf ("O resultado da soma é igual a: %.0f", soma);
    
    return 0;
}
