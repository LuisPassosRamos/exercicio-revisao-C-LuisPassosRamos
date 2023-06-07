//Escreva uma função que, dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária desse número por referência.
#include <stdio.h>
#include <stdlib.h>

float funcao1 (float num){
    printf ("Digite o número desejado: \n");
    scanf ("%f", &num);
     
    return num; 
}

int main (void){
    float num;
   
    funcao1(num);
    printf ("A parte inteira do número é igual a: %.0f \n", num);
    funcao1(num);
    printf ("A parte fracionária do número é igual a: %f \n", num);

}