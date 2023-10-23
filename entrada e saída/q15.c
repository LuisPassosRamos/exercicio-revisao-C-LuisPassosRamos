#include <stdio.h>
/*Ler o valor correspondente ao salário mensal (variável SM)
 de um trabalhador e também o valor do percentual de reajuste (variável PR) a ser atribuído.
  Apresentar o valor do novo salário (variável NS).*/
  int main(){
    float SM, PR, NS; //Declaracao das variaveis de salario mensal, percentual de reajuste e novo salario;

    printf("Digite o valor correspondente ao seu salario mensal: ");
    scanf("%f", &SM);

    printf("Digite o valor correspondente ao valor do percentual de reajuste: ");
    scanf("%f", &PR);

    NS = SM+(SM*(PR/100));

    printf("O novo valor do salario: %.2f", NS);
    return 0;
}
