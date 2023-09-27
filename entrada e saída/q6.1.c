#include <stdio.h>
#include <stdlib.h>
/*Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem,
utilizando um automóvel que faz 12 Km por litro.*/
/// MESMO CÓDIGO PORÉM MAIS AVANÇADO
struct tempo
{
    int horas;
    int minutos;
    int segundos;
};
float distância()
{
    //Retornando o valor do cálculo da distância percorrida;
    return (velocidade*tempo_viagem)
}
float litros_usados(float distancia)
{
    //Declarando a variável de litros por quilômetro;
    float km_l;

    printf ("Informe quantos litros por quilômetro seu veículo consome:\n")

    printf ("%f", &km_l);
    //Efetuando e retornando cálculo dos litros usados durante a viagem;
    return (distancia/km_l);
}

int main ()
{
    //Declaração da variável do tempo de viagem e a variável da velocidade média;
    struct tempo viagem;

    float velocidade;
    //Solicitando o valor do tempo de viagem e o valor da velocidade média durante a viagem;
    printf("Digite o tempo gasto em viagem: [hh:mm:ss]\n");

    scanf ("%d:%d:%d", &tempo.horas, &tempo.minutos, &tempo.segundos);

    printf("Digite a velocidade média em km/h durante a viagem:\n");

    scanf ("%f", &velocidade);
    //Declarando e convertendo o tempo da viagem pra horas;
    unsigned float tempo_viagem = (tempo.horas + (tempo.minutos/60) + (tempo.segundos/3600));

    printf ("%f", tempo_viagem);

    ///Retornando o valor da velocidade média, do tempo gasto, da distancia percorrida e dos litros usados.
    printf("A velocidade média é de %.2f\nO tempo gasto na viagem foi de %.2f\nA distância percorrida foi de %.2f\nOs litros usados na viagem foram %.2f", velocidade, tempo, distancia, litros_usados);

    return 0;
}
