#include <stdio.h>
#include <stdlib.h>
//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

void main()
{
    int array [10];
    
    for (int i = 0; i < 10; i++)
    {
        printf ("%p \n", &array[i]);
    }
    
       
}
