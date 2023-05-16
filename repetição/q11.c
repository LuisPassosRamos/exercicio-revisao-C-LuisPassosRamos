#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia um número positivo e imprima seus divisores. 
//Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

int main()
{
    int num;

    printf ("Digite um número: \n");
    scanf ("%d", &num);

    for (int i = 1; i <= num; i++){

        if ((num % i) == 0)
        {
            printf ("%d ", i);
        }
        
    }
    
    return 0;
}
