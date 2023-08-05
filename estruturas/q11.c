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

int diferenca(const struct Vdata *ponteiro[2]){
    int mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int )

}

int main()
{
    struct Vdata data[2];
    for (int i = 0; i < 2; i++)
    {
        printf ("Digite a %dª data (formato dd:mm:aaaa): ", i+1);
        scanf ("%d:%d:%d", &data[i].dia, &data[i].mes, &data[i].ano);
    }
    diferenca(&data[2]);
}
