#include<stdio.h>
#include<stdlib.h>

/*Construir um programa que efetue o cálculo do salário líquido de um professor.
   Para fazer este programa, você deverá possuir alguns dados, tais como:
   valor da hora-aula, número de horas trabalhadas no mês e o percentual de desconto do INSS.
   Em primeiro lugar, deve-se estabelecer qual será o seu salário bruto para efetuar o desconto
   e ter o valor do salário líquido.*/
int main()
{
    /*Declaracão das variáveis
    HT = Horas trabalhadas no mês;
    VH = Valor hora-aula;
    PD = Percentual de desconto;
    SB = Salário bruto;
    TD = Total de desconto;
    SL = Salário líquido.*/
    float ht, vh, pd, sb, td, sl;

    //Solicitando e guardando ao usuário o valor das horas trabalhadas no mês;
    printf("Digite as horas trabalhadas no mês. \n");

    scanf("%f",&ht);

    //Solicitando e guardando ao usuário o valor da hora-aula;
    printf("Digite o valor da hora-aula. \n");

    scanf("%f",&vh);

    //Solicitando e guardando ao usuário o valor do percentual de desconto;
    printf("Digite o percentual de desconto. \n");

    scanf("%f",&pd);

    //Guardando o valor do salário bruto (hora trabalhadas no mês multiplicado pelo valor da hora-aula) ;
    sb=(ht*vh);

    //Guardando o valor do total de desconto (percentual de desconto dividido por 100);
    td=(pd/100);

    //Guardando o valor total do salário líquido (salário bruto - desconto);
    sl=sb-(sb*td);

    //Retornando resultado (salário bruto e salário líquido);
    printf ("Os valores do salário bruto e líquido é igual a: %.2f, %.2f \n", sb, sl);

    return 0;
}
