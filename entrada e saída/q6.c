#include <stdio.h>
#include <stdlib.h>
/*Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem,
utilizando um autom�vel que faz 12 Km por litro.*/
int main ()
{
    //Declara��o da vari�vel do tempo de viagem e a vari�vel da velocidade m�dia;
    float tempo;

    float velocidade;
    //Solicitando o valor do tempo de viagem e o valor da velocidade m�dia durante a viagem;
    printf("Digite o tempo gasto em minutos:\n");

    scanf ("%f", &tempo);

    printf("Digite a velocidade m�dia durante a viagem:\n");

    scanf ("%f", &velocidade);
    //Declarando e efetuando o c�lculo da dist�ncia percorrida;
    float distancia = tempo*velocidade;
    //Declarando e efetuando o c�lculo dos litros usados durante a viagem;
    float litros_usados = (distancia/12);
    ///Retornando o valor da velocidade m�dia, do tempo gasto, da distancia percorrida e dos litros usados.
    printf("A velocidade m�dia � de %.2f\nO tempo gasto na viagem foi de %.2f\nA dist�ncia percorrida foi de %.2f\nOs litros usados na viagem foram %.2f", velocidade, tempo, distancia, litros_usados);

    return 0;
}
