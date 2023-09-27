#include <stdio.h>
#include <stdlib.h>
/*Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem,
utilizando um autom�vel que faz 12 Km por litro.*/
/// MESMO C�DIGO POR�M MAIS AVAN�ADO
struct tempo
{
    int horas;
    int minutos;
    int segundos;
};
float dist�ncia()
{
    //Retornando o valor do c�lculo da dist�ncia percorrida;
    return (velocidade*tempo_viagem)
}
float litros_usados(float distancia)
{
    //Declarando a vari�vel de litros por quil�metro;
    float km_l;

    printf ("Informe quantos litros por quil�metro seu ve�culo consome:\n")

    printf ("%f", &km_l);
    //Efetuando e retornando c�lculo dos litros usados durante a viagem;
    return (distancia/km_l);
}

int main ()
{
    //Declara��o da vari�vel do tempo de viagem e a vari�vel da velocidade m�dia;
    struct tempo viagem;

    float velocidade;
    //Solicitando o valor do tempo de viagem e o valor da velocidade m�dia durante a viagem;
    printf("Digite o tempo gasto em viagem: [hh:mm:ss]\n");

    scanf ("%d:%d:%d", &tempo.horas, &tempo.minutos, &tempo.segundos);

    printf("Digite a velocidade m�dia em km/h durante a viagem:\n");

    scanf ("%f", &velocidade);
    //Declarando e convertendo o tempo da viagem pra horas;
    unsigned float tempo_viagem = (tempo.horas + (tempo.minutos/60) + (tempo.segundos/3600));

    printf ("%f", tempo_viagem);

    ///Retornando o valor da velocidade m�dia, do tempo gasto, da distancia percorrida e dos litros usados.
    printf("A velocidade m�dia � de %.2f\nO tempo gasto na viagem foi de %.2f\nA dist�ncia percorrida foi de %.2f\nOs litros usados na viagem foram %.2f", velocidade, tempo, distancia, litros_usados);

    return 0;
}
