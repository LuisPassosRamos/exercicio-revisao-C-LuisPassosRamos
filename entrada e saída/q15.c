#include <stdio.h>
/*Ler o valor correspondente ao sal�rio mensal (vari�vel SM)
 de um trabalhador e tamb�m o valor do percentual de reajuste (vari�vel PR) a ser atribu�do.
  Apresentar o valor do novo sal�rio (vari�vel NS).*/
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
