#include<stdio.h>
#include<stdlib.h>
/*Ler quatro n�meros inteiros e apresentar o resultado da adi��o e multiplica��o,
baseando-se na utiliza��o do conceito da propriedade distributiva.
Ou seja, se forem lidas as vari�veis A, B, C, e D, devem ser somadas e multiplicadas A com B, A com C e A com D.
Depois B com C, B com D e por fim C com D.
Perceba que ser� necess�rio efetuar seis opera��es de adi��o e seis opera��es de multiplica��o
e apresentar doze resultados de sa�da.*/
int main(){
    //Declara��o das quatro vari�veis;
    int a, b, c, d;
    //Solicitando e guardando o valor das vari�veis;
    printf ("\nDigite o valor da vari�vel A: ");
    scanf("%d", &a);

    printf ("\nDigite o valor da vari�vel B: ");
    scanf("%d", &b);

    printf ("\nDigite o valor da vari�vel C: ");
    scanf("%d", &c);

    printf ("\nDigite o valor da vari�vel D: ");
    scanf("%d", &d);
    //Mostrando o resultado das opera��es ao usu�rio
    printf("\nO valor da soma das vari�veis A e B � igual a: %d, e a multiplica��o entre as mesmas � igual a: %d", (a+b), (a*b));
    printf("\nO valor da soma das vari�veis A e C � igual a: %d, e a multiplica��o entre as mesmas � igual a: %d", (a+c), (a*c));
    printf("\nO valor da soma das vari�veis A e D � igual a: %d, e a multiplica��o entre as mesmas � igual a: %d", (a+d), (a*d));
    printf("\nO valor da soma das vari�veis B e C � igual a: %d, e a multiplica��o entre as mesmas � igual a: %d", (b+c), (b*c));
    printf("\nO valor da soma das vari�veis B e D � igual a: %d, e a multiplica��o entre as mesmas � igual a: %d", (b+d), (b*d));
    printf("\nO valor da soma das vari�veis C e D � igual a: %d, e a multiplica��o entre as mesmas � igual a: %d", (c+d), (c*d));

    return 0;
}
