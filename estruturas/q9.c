#include <stdio.h>
/*Crie uma estrutura representando um atleta.
Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
Agora, escreva um programa que leia os dados de cinco atletas.
Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

struct atleta{
    char nome[50];
    char esporte[25];
    int idade;
    float altura;
};

int verificar (const struct *ponteiro, const struct *ponteiro1){
    if (ponteiro->idade)
}
int main(){
    struct atleta atdata[5];
    struct atleta alto;
    struct atleta velho;
    for (int i = 0; i < 5; i++){
        printf ("\nDDigite o nome do atleta %d: ", i+1);
        fgets (atdata[i].nome, 50, stdin);

        printf ("\nDigite o nome do esporte  pelo atleta %d: " i+1);
        fgets (atdata[i].esporte, 25, stdin);

        printf ("\nDDigite a idade do atleta %d", i+1);
        scanf ("%d", &atdata[i].idade);

        printf ("\nDDigite a altura do atleta %d", i+1);
        scanf ("%f", &atdata[i].altura);

        if ()
    }

    for (int i = 0; i < 5; i++){
        if (verificar(&atdata[i], &alto)){
            alto = atdata[i];
        }
        if (verificar(&atdata[i], &velho)){
            velho = atdata[i];
        }
    }

    printf ("\nAtleta mais alto: %s\n Atleta mais velho: %s ")
    }
    return 0;
}
