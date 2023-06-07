//Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores

#include <stdio.h>
#include <stdlib.h>

int main (void){
    int num [5];
    int soma;

    for (int i = 0; i < 5; i++)
    {
     printf ("Digite o número desejado:");
     scanf ("%d", &num[i]);
     soma += num[i];
    }
    printf ("A média é igual a: %d", soma/5);
}