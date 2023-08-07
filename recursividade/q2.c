#include <stdio.h>
/*Crie uma fun��o recursiva que receba um n�mero inteiro N e retorne o somat�rio dos n�meros de 1 a N.*/

float somatorio (int num)
{
    if (num > 0)
    {
        return (num + (somatorio(num-1)));
    } else return 0;
}

int main()
{
    printf ("Soma: %.2f", somatorio(5));
    return 0;
}
