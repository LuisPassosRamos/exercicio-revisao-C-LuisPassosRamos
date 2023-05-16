#include <stdio.h>
#include <stdlib.h>
//Faça um programa que leia 10 inteiros e imprima sua média.

int main()
{
    int num, soma; 
    printf ("Digite 10 números para obtermos a média: \n");
    for (int cont; cont < 10; cont++){
        scanf ("%d", &num);
        soma += num;
    }
    printf ("A média dos 10 números é igual a: \n %d", soma/10);
    return 0;
}
