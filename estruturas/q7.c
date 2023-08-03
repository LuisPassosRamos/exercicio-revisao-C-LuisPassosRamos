#include <stdio.h>
/*Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. 
Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura e imprima a maior hora.*/

struct hora {
    int hora;
    int min;
    int seg;
};

int repHora(){
    int maiorHora = 0;
    int temp
    int temp1

    for (int i = 0; i < 5; i++){
        printf ("Digite a hora: ");
        scanf ("%d", &vetor[i].hora);

        printf ("Digite os minutos: ");
        scanf ("%d", &vetor[i].min);
        
        printf ("Digite os segundos: ");
        scanf ("%d", &vetor[i].seg);

        temp = ((vetor[i].hora * 3600) + (vetor[i].min * 60) + (vetor[i].seg))
        if (temp > maiorHora){
            maiorHora = temp
            temp1 = i
        }
    }
    return temp1;
}

int main (){
    struct hora vetor[5];
    int resposta = repHora();

    printf ("A maior hora é: %d horas, %d minutos, %d segundos." vetor[resposta].hora, vetor[resposta].min, vetor[resposta].seg);

    
}