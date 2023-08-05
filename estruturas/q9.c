#include <stdio.h>
/*Crie uma estrutura representando um atleta.
Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura.
Agora, escreva um programa que leia os dados de cinco atletas.
Calcule e exiba os nomes do atleta mais alto e do mais velho.*/

struct atleta
{
    char nome[50];
    char esporte[25];
    int idade;
    float altura;
};
int verificarAltura (const struct atleta *ponteiro, const struct atleta *ponteiro1)
{
    if ((ponteiro->altura) > (ponteiro1->altura)) return 1;
    else return 0;
}
int verificarIdade (const struct atleta *ponteiro, const struct atleta *ponteiro1)
{
    if ((ponteiro->idade) > (ponteiro1->idade)) return 1;
    else return 0;
}
int main()
{
    struct atleta atdata[5];
    struct atleta alto;
    struct atleta velho;
    for (int i = 0; i < 5; i++)
    {
        printf ("\nDigite o nome do atleta %d: ", i+1);
        fgets (atdata[i].nome, 50, stdin);
        atdata[i].nome[strcspn(atdata[i].nome, "\n")] = '\0';
        printf ("\nDigite o nome do esporte praticado pelo atleta %d: ", i+1);
        fgets (atdata[i].esporte, 25, stdin);
        atdata[i].esporte[strcspn(atdata[i].esporte, "\n")] = '\0';

        printf ("\nDigite a idade do atleta %d:", i+1);
        scanf ("%d", &atdata[i].idade);

        printf ("\nDigite a altura do atleta %d:", i+1);
        scanf ("%f", &atdata[i].altura);
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        if (verificarAltura(&atdata[i], &alto) == 1)
        {
            alto = atdata[i];
        }
        if (verificarIdade(&atdata[i], &velho) == 1)
        {
            velho = atdata[i];
        }
    }

    printf ("\nAtleta mais alto: nome: %s, esporte: %s, altura: %.2f, idade: %d\n Atleta mais velho: nome: %s, esporte: %s, altura: %.2f, idade: %d ",
            alto.nome, alto.esporte, alto.altura, alto.idade, velho.nome, velho.esporte, velho.altura, velho.idade);
    return 0;
}
