#include <stdio.h>
/*Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.*/

struct nascimento
{
    int dia;
    int mes;
    int ano;
};

struct pessoa
{
    char nome[50];
    struct nascimento data;
};

int verifica(const struct pessoa *ponteiro,const struct pessoa *ponteiro1)
{
    if (ponteiro->data.ano < ponteiro1->data.ano)
    {
        return -1;
    }
    else if (ponteiro->data.ano > ponteiro->data.ano)
    {
        return 1;
    }
    else if (ponteiro1->data.mes < ponteiro1->data.mes)
    {
        return -1;
    }
    else if (ponteiro->data.mes > ponteiro1->data.mes)
    {
        return 1;
    }
    else if (ponteiro->data.dia < ponteiro1->data.dia)
    {
        return -1;
    }
    else if (ponteiro->data.dia > ponteiro1->data.dia)
    {
        return 1;
    }

    return 0;
}

int main()
{
    struct pessoa pdata[6];
    struct pessoa nova;
    struct pessoa velha;

    for (int i = 0; i < 6; i++)
    {
        printf ("Digite o nome da pessoa %d:", i+1);
        setbuf (stdin, NULL);
        scanf ("%s", pdata[i].nome);

        printf ("Digite a data de nascimento da pessoa %d(formato: dd/mm/aaaa): ", i+1);
        scanf ("%d/%d/%d", &pdata[i].data.dia, &pdata[i].data.mes, &pdata[i].data.ano);

    }

    nova = pdata[0];
    velha = pdata[0];
    for (int i = 0; i < 6; i++)
    {
        if ((verifica (&pdata[i], &nova)) == 1)
        {
            nova = pdata[i];
        }
        else if ((verifica (&pdata[i], &velha)) == -1){
            velha = pdata[i];
        }

    }

    printf ("\nA pessoa mais nova é: %s", nova.nome);
    printf ("\nA pessoa mais velha é: %s", velha.nome);
}
