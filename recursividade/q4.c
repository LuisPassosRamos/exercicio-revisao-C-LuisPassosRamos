#include <stdio.h>
/*Crie uma função recursiva que receba um número inteiro N e imprima todos os números naturais de 0 até N em ordem decrescente.*/

void impressao(int num){
    if (num > 0){
        printf ("%d ", num);
        impressao (num-1);
    }
}

int main(){
    impressao(5);
}
