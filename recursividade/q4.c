#include <stdio.h>
/*Crie uma fun��o recursiva que receba um n�mero inteiro N e imprima todos os n�meros naturais de 0 at� N em ordem decrescente.*/

void impressao(int num){
    if (num > 0){
        printf ("%d ", num);
        impressao (num-1);
    }
}

int main(){
    impressao(5);
}
