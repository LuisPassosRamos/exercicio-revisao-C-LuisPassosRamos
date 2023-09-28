#include<stdio.h>
#include<stdlib.h>
/*Ler quatro números inteiros e apresentar o resultado da adição e multiplicação,
baseando-se na utilização do conceito da propriedade distributiva.
Ou seja, se forem lidas as variáveis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D.
Depois B com C, B com D e por fim C com D.
Perceba que será necessário efetuar seis operações de adição e seis operações de multiplicação
e apresentar doze resultados de saída.*/
int main(){
    //Declaração das quatro variáveis;
    int a, b, c, d;
    //Solicitando e guardando o valor das variáveis;
    printf ("\nDigite o valor da variável A: ");
    scanf("%d", &a);

    printf ("\nDigite o valor da variável B: ");
    scanf("%d", &b);

    printf ("\nDigite o valor da variável C: ");
    scanf("%d", &c);

    printf ("\nDigite o valor da variável D: ");
    scanf("%d", &d);
    //Mostrando o resultado das operações ao usuário
    printf("\nO valor da soma das variáveis A e B é igual a: %d, e a multiplicação entre as mesmas é igual a: %d", (a+b), (a*b));
    printf("\nO valor da soma das variáveis A e C é igual a: %d, e a multiplicação entre as mesmas é igual a: %d", (a+c), (a*c));
    printf("\nO valor da soma das variáveis A e D é igual a: %d, e a multiplicação entre as mesmas é igual a: %d", (a+d), (a*d));
    printf("\nO valor da soma das variáveis B e C é igual a: %d, e a multiplicação entre as mesmas é igual a: %d", (b+c), (b*c));
    printf("\nO valor da soma das variáveis B e D é igual a: %d, e a multiplicação entre as mesmas é igual a: %d", (b+d), (b*d));
    printf("\nO valor da soma das variáveis C e D é igual a: %d, e a multiplicação entre as mesmas é igual a: %d", (c+d), (c*d));

    return 0;
}
