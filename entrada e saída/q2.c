#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float sl, vh, ht, pd, sb, td;

    printf ("Digite as horas trabalhadas no mês. \n");
    scanf ("%f", &ht);
    printf ("Digite o valor da hora-aula. \n");
    scanf ("%f", &vh);
    printf ("Digite o percentual de desconto. \n");
    scanf ("%f", &pd);

    sb = (ht*vh);
    td = (pd/100);
    sl = sb-(sb*td);

    printf ("Os valores do salário bruto e líquido é igual a: %.2f, %.2f \n", sb, sl);

    return 0;
}