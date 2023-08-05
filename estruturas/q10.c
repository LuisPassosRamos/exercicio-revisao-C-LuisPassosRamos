#include <stdio.h>
/*Usando a estrutura "atleta" do exercício anterior,
escreva um programa que leia os dados de cinco atletas e os exiba por ordem de idade,
do mais velho para o mais novo.*/

struct atleta
{
    char nome[50];
    char esporte[25];
    int idade;
    float altura;
};

int main()
{
    struct atleta atdata[5];
    struct atleta velho;
    for (int i = 0; i < 5; i++)
    {
        printf ("\nDigite o nome do atleta %d: ", i+1);
        fgets (atdata[i].nome, 50, stdin);
        atdata[i].nome[strcspn(atdata[i].nome, "\n")] = '\0';
        printf ("\nDigite o nome do esporte praticado pelo atleta %d: ", i+1);
        fgets (atdata[i].esporte, 25, stdin);
        atdata[i].esporte[strcspn(atdata[i].esporte, "\n")] = '\0';

        printf ("\nDigite a idade do atleta %d", i+1);
        scanf ("%d", &atdata[i].idade);

        printf ("\nDigite a altura do atleta %d", i+1);
        scanf ("%f", &atdata[i].altura);
        getchar();


    }


    return 0;
}
