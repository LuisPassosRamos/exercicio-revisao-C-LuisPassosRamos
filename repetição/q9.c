#include <stdio.h>
#include <stdlib.h>
// Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.
int main()
{
    int num, menor, maior;

    printf("Digite dez números: "); 
    
    scanf("%d", &num);
    menor = num;

    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &num);
        if (num < menor)
        {
            menor = num;
        }
        else
        {
            if (num > maior)
            {
                maior = num;
            }
        }
    }
    printf ("O maior número é: %d \n E o menor número é: %d \n", maior, menor);
    return 0;
}
