#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/
int main (void){
    int num1 = 1;
    int num2 = 2;

    printf ("%d", num1);
    printf ("%d", &num1);
    if (&num1 > &num2)
    {
        printf("O primeiro número é maior.");
    }
    else
    {
        printf ("O segundo número é maior.");
    }
    
}