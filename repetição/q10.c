#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua média.

int main()
{
    float num, soma;
    int cont = 0;
    printf ("Digite 10 números inteiros positivos: \n");
    while (cont < 10){
        scanf ("%f", &num);
        if (num >= 0){
            soma += num;
            cont++;
        }
    }
    printf ("A média dos números positivos inteiros é igual a: \n %.1f", (soma/10));
    return 0;
}

