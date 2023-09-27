#include <stdio.h>
#include <stdlib.h>
/*Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem,
utilizando um automóvel que faz 12 Km por litro.*/
int main ()
{
    //Declaração da variável do tempo de viagem e a variável da velocidade média;
    float tempo;

    float velocidade;
    //Solicitando o valor do tempo de viagem e o valor da velocidade média durante a viagem;
    printf("Digite o tempo gasto em minutos:\n");

    scanf ("%f", &tempo);

    printf("Digite a velocidade média durante a viagem:\n");

    scanf ("%f", &velocidade);
    //Declarando e efetuando o cálculo da distância percorrida;
    float distancia = tempo*velocidade;
    //Declarando e efetuando o cálculo dos litros usados durante a viagem;
    float litros_usados = (distancia/12);
    ///Retornando o valor da velocidade média, do tempo gasto, da distancia percorrida e dos litros usados.
    printf("A velocidade média é de %.2f\nO tempo gasto na viagem foi de %.2f\nA distância percorrida foi de %.2f\nOs litros usados na viagem foram %.2f", velocidade, tempo, distancia, litros_usados);

    return 0;
}
