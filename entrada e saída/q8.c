#include<stdio.h>
#include<stdlib.h>
//Elaborar um programa que calcule e apresente o volume de uma caixa retangular;
//F�RMULA: VOLUME=COMPRIMENTO*LARGURA*ALTURA;
int main()
{
    //Declara��o das vari�veis: Comprimento=length, Largura=width, Altura=height;
    float length;
    float width;
    float height;
    //Solicitando os valores da caixa ao usu�rio;
    printf("\nInforme o comprimento da caixa: ");
    scanf("%f", &length);

    printf("\nInforme a largura da caixa: ");
    scanf("%f", &width);

    printf("\nInforme a altura da caixa: ");
    scanf("%f", &height);
    //Declarando e atribuindo o valor de acordo com a f�rmula;
    float volume = (length*width*height);
    //Mostrando ao usu�rio o valor final do volume;
    printf ("\nO valor do comprimento �: %.2f", length);
    printf ("\nO valor da largura �: %.2f", width);
    printf ("\nO valor da altura �: %.2f", height);
    printf ("\nO valor do volume �: %.2f", volume);

}
