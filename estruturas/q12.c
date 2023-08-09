#include <stdio.h>
//Defina uma estrutura chamada "Pessoa" com os campos nome, idade e altura.
//Leia e armazene os dados de cinco pessoas em um vetor e
//exiba o nome das pessoas da mais alta para a mais baixa.

struct pessoa
{
    char nome[50];
    int idade;
    float altura;
};

int main()
{
    struct pessoa pdado[5];

    for (int i = 0; i < 5; i++)
    {
        printf ("\nDigite os dados da %d pessoa:", i+1);
        printf ("\nNome: ");
        setbuf(stdin, NULL);
        scanf ("%s", &pdado[i].nome);

        printf ("\nIdade: ");
        scanf ("%d", &pdado[i].idade);

        printf ("\nAltura: ");
        scanf ("%f", &pdado[i].altura);
    }

    struct pessoa temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (pdado[i].altura > pdado[j].altura){

                temp.altura = pdado[j].altura;
                pdado[j].altura = pdado[i].altura;
                pdado[i].altura = temp.altura;

                temp.idade = pdado[j].idade;
                pdado[j].idade = pdado[i].idade;
                pdado[i].idade = temp.idade;

                strcpy(temp.nome, pdado[j].nome);
                strcpy(pdado[j].nome, pdado[i].nome);
                strcpy(pdado[i].nome, temp.nome);

            }
        }
    }
    for (int i = 0; i < 5; i++){
        printf ("\nNome:%s\nIdade:%d\nAltura:%.2f", pdado[i].nome, pdado[i].idade, pdado[i].altura);

    }

}

