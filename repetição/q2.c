#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que leia um número inteiro positivo N
//e imprima todos os números naturais de 0 até N em ordem decrescente.
int main (){
    int n;
    printf ("Digite um número positivo:");
    scanf ("%d", &n);

    for (n; n >= 0; n--){
        printf ("%d \n", n);
    }

    return 0;
}
