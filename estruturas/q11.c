#include <stdio.h>
/*Escreva um programa que contenha uma estrutura representando uma data válida.
Essa estrutura deve conter os campos dia, mês e ano.
Em seguida, leia duas datas e armazene nessa estrutura.
Calcule e exiba o número de dias que decorreram entre as duas datas.*/
struct Vdata
{
    int dia;
    int mes;
    int ano;
};

int diferenca(struct Vdata data[2], struct Vdata *ponteiro)
{
    int mesDias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (data[1].ano > data[2].ano)
    {
        ponteiro->ano = (data[1].ano - data[2].ano);
    }
    else ponteiro->ano = (data[2].ano - data[1].ano);

    ponteiro->ano = (ponteiro->ano*365);

    if (data[1].mes > data[2].mes)
    {
        ponteiro->mes = (data[1].mes - data[2].mes);
    }
    else ponteiro->mes = (data[2].mes - data[1].mes);


    if (data[1].dia > data[2].dia)
    {
        ponteiro->dia = (data[1].dia - data[2].dia);
    }
    else ponteiro->dia = (data[2].dia - data[1].dia);

    for (int i = (ponteiro->mes - 1); i > 0; i--)
    {
        ponteiro->dia += mesDias[i];
    }

    return (ponteiro->ano + ponteiro->dia);
}

int main()
{
    struct Vdata data[2];
    struct Vdata Ddata;

    for (int i = 0; i < 2; i++)
    {
        printf ("Digite a %dª data (formato dd/mm/aaaa): ", i+1);
        scanf ("%d/%d/%d", &data[i].dia, &data[i].mes, &data[i].ano);
    }
    int dias = diferenca(data, &Ddata);

    printf ("Diferenca de dias: %d", dias);

}
