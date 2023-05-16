#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse número,
//com exceção dele próprio. Exemplo: a soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
int main()
{
    int num, soma;
    printf ("Digite um número: \n");
    scanf ("%d", &num);
    for (int i = 1; i < num; i++){
        if ((num % i) == 0){
            printf ("%d", i);
            soma += i;
        }
    }
    printf ("%d", soma);
    return 0;
}

