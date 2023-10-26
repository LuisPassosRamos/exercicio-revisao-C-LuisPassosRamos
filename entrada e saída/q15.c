#include <stdio.h>
/*Ler o valor correspondente ao salário mensal (variável SM)
de um trabalhador e também o valor do percentual de reajuste (variável PR) a ser atribuído.
    Apresentar o valor do novo salário (variável NS).*/
int main()
{
    float SM, PR, NS; //Declaracao das variaveis de salario mensal, percentual de reajuste e novo salario;

    //Solicitando e guardando o valor do salario mensal do usuario;
    printf("Digite o valor correspondente ao seu salario mensal: ");
    scanf("%f", &SM);
    //Solicitando e guardando o valor do percentual de reajuste;
    printf("Digite o valor correspondente ao valor do percentual de reajuste: ");
    scanf("%f", &PR);
    //Realizando o calculo do novo salario ja ajustado;
    NS = SM+(SM*(PR/100));
    //Imprimindo o valor resultante na tela do usuario.
    printf("O novo valor do salario: %.2f", NS);
    return 0;
}
