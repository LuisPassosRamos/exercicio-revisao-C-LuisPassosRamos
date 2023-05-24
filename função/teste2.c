#include <stdio.h>
#include <stdlib.h>
// Elabore uma função que receba como parâmetro um valor inteiro n
// e gere como saída um triângulo lateral formado
// por asteriscos conforme o exemplo a seguir, em que usamos n = 4.
int tri(int n)
{
    for (int a = 0; a < n; a++)
    {

        for (int b = 0; b <= a; b++)
        {
            printf("*");
        }

        printf("\n");
    }
     for (int a = n; a <= n; a--)
    {

        for (int b = 0; b <= a; b++)
        {
            printf("*");
        }

        printf("\n");
    }
}
int main()
{

    int n;

    printf("Digite o número do topo do triângulo.\n");
    scanf("%d", &n);

    tri(n);
}