#include <stdio.h>
#include <stdlib.h>
//Elabore um programa que peça ao usuário para digitar 10 valores. 
//Some esses valores e apresente o resultado na tela.
int main()
{
    int num;
    int soma;
    printf ("Digite dez números a serem somados: \n");
    for (int cont = 1; cont <= 10; cont++){
        scanf ("%d", &num);
        soma += num;
    }
    printf ("a soma dos dez números é igual a: %d \n", soma);


    return 0;
}
