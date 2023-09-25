#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Ler uma temperatura em graus Celsius e apresent�-la convertida em graus Fahrenheit.
float conversaoF ()
{
    //Declarando as vari�veis para graus Celsius e para Fahrenheit;
    float c;

    //Solicitando e guardando o valor da temperatura em graus Celsius;
    printf("\nDigite a temperatura em graus Celsius. \n");

    scanf("%f", &c);

    //Retornando o resultado em Fahrenheit;
    return ((9*c+160)/5);
}
//Ler uma temperatura em graus Fahrenheit e apresent�-la convertida em graus Celsius.
float conversaoC ()
{
    //Declarando as vari�veis para graus Celsius e para Fahrenheit;
    float f;

    //Solicitando e guardando o valor da temperatura em Fahrenheit;
    printf ("Digite a temperatura em Fahrenheit. \n");
    scanf ("%f", &f);

    //Retornando o resultado em Fahrenheit;
    return ((f-32)*(5/9));
}

int main()
{
    //Declarando vari�vel da escolha
    int op;


    //Solicitando a opera��o ao usu�rio
    printf ("Digite qual convers�o voc� deseja realizar:\n1 = Graus Celcius para Fahrenheit\n2 = Fahrenheit para Graus Celcius\n|");
    scanf ("%d", &op);

    switch(op)
    {
    case 1:
        printf("\nO valor de Celcius para Fahrenheit � igual a: %.2f",conversaoF());
        break;
    case 2:
        printf("\nO valor Fahrenheit para Celcius � igual a: %.2f",conversaoC());
        break;
    default:
        printf("A opera��o digitada � inv�lida.");
        break;
    }
}
