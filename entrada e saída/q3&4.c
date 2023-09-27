#include<stdio.h>
#include<stdlib.h>

//Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
float conversaoF (float c)
{
    //Retornando o resultado em Fahrenheit;
    return ((9*c+160)/5);
}
//Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
float conversaoC(float f)
{
    //Retornando o resultado em Fahrenheit;
    return ((f-32)*(0.5555555555555556));
}

int main()
{
    //Declarando variável da escolha
    int op;


    //Solicitando a operação ao usuário
    printf ("Digite qual conversão você deseja realizar:\n1 = Graus Celcius para Fahrenheit\n2 = Fahrenheit para Graus Celcius\n|");

    scanf ("%d", &op);

    switch(op)
    {
         //Declarando as variáveis para graus Celsius e para Fahrenheit;
        float c;

        //Declarando as variáveis para graus Celsius e para Fahrenheit;
        float f;

    case 1:

        //Solicitando e guardando o valor da temperatura em graus Celsius;
        printf("\nDigite a temperatura em graus Celsius. \n");

        scanf("%f",&c);

        printf("\nO valor de Celcius para Fahrenheit é igual a: %.2f",conversaoF(c));

        break;

    case 2:

        //Solicitando e guardando o valor da temperatura em Fahrenheit;
        printf("Digite a temperatura em Fahrenheit.\n");

        scanf("%f",&f);

        printf("\nO valor Fahrenheit para Celcius é igual a: %.2f",conversaoC(f));

        break;

    default:

        printf("A operação digitada é inválida.");

        break;
    }
}
