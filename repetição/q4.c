#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 
//considerando números maiores que 0.
int main(){
    int n = 3;
    for (int i = 1; i <= 15; i++){

        if ((i % 3) == 0){
            printf ("%d \n", i);
        }
    }
    return 0;
}

