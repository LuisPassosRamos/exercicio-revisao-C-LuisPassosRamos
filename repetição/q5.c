#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.
int main()
{
    int cont = 0;
    int num = 0;
    int soma = 0;
    do{
        num++;
        if ((num % 2) == 0)
        {
           soma = soma + num;
           cont++;
        }
        
    }while (cont < 50);
    printf ("%d \n", soma);
    return 0;
}
