#include <stdio.h>

int main()
{
    int var1, var2;

    // Obter os valores das duas variáveis inteiras
    printf("Digite o valor da primeira variável: ");
    scanf("%d", &var1);

    printf("Digite o valor da segunda variável: ");
    scanf("%d", &var2);

    // Obter os endereços das duas variáveis
    int *endereco_var1 = &var1;
    int *endereco_var2 = &var2;

    // Comparar os endereços e exibir o maior endereço
    if (endereco_var1 > endereco_var2)
    {
        printf("O endereço da primeira variável é maior.\n");
        printf("Endereço da primeira variável: %p\n", (void *)endereco_var1);
    }
    else if (endereco_var2 > endereco_var1)
    {
        printf("O endereço da segunda variável é maior.\n");
        printf("Endereço da segunda variável: %p\n", (void *)endereco_var2);
    }
    else
    {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
