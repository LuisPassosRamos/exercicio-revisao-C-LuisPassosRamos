#include<stdio.h>
#include<stdlib.h>
//Elaborar um programa que calcule e apresente o volume de uma caixa retangular;
//FÓRMULA: VOLUME=COMPRIMENTO*LARGURA*ALTURA;
int main()
{
    //Declaração das variáveis: Comprimento=length, Largura=width, Altura=height;
    float length;
    float width;
    float height;
    //Solicitando os valores da caixa ao usuário;
    printf("\nInforme o comprimento da caixa: ");
    scanf("%f", &length);

    printf("\nInforme a largura da caixa: ");
    scanf("%f", &width);

    printf("\nInforme a altura da caixa: ");
    scanf("%f", &height);
    //Declarando e atribuindo o valor de acordo com a fórmula;
    float volume = (length*width*height);
    //Mostrando ao usuário o valor final do volume;
    printf ("\nO valor do comprimento é: %.2f", length);
    printf ("\nO valor da largura é: %.2f", width);
    printf ("\nO valor da altura é: %.2f", height);
    printf ("\nO valor do volume é: %.2f", volume);

}
