// Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S = 1³ + 2³ + ... + n³;
#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
    if (n > 0)
    {
        return (n * n * n) + func (n-1);
    }
}

int main(void){
    
    int n = 5;

    int soma = func(n);
    printf("Resultado %d", soma);
}
