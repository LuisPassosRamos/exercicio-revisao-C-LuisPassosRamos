#include <stdio.h>

struct Vdata
{
    int dia;
    int mes;
    int ano;
};

int isBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diferenca(struct Vdata data[2], struct Vdata *ponteiro)
{
    int mesDias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDias = 0;

    // Inicializar ponteiro com valores iniciais
    ponteiro->ano = 0;
    ponteiro->mes = 0;
    ponteiro->dia = 0;

    // Ano bissexto do primeiro ano
    if (isBissexto(data[0].ano) && data[0].mes <= 2)
        mesDias[1] = 29;

    for (int i = data[0].mes; i <= 12; i++)
        totalDias += mesDias[i - 1] - data[0].dia;

    // Anos completos
    for (int i = data[0].ano + 1; i < data[1].ano; i++)
        totalDias += isBissexto(i) ? 366 : 365;

    // Ano bissexto do último ano
    if (isBissexto(data[1].ano) && data[1].mes > 2)
        mesDias[1] = 29;

    for (int i = 1; i < data[1].mes; i++)
        totalDias += mesDias[i - 1];

    totalDias += data[1].dia;

    return totalDias;
}

int main()
{
    struct Vdata data[2];
    struct Vdata Ddata;

    for (int i = 0; i < 2; i++)
    {
        printf("Digite a %dª data (formato dd:mm:aaaa): ", i + 1);
        scanf("%d:%d:%d", &data[i].dia, &data[i].mes, &data[i].ano);
    }

    int dias = diferenca(data, &Ddata);

    printf("Diferenca de horario: %d", dias);

    return 0;
}
