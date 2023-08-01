#include <stdio.h>

// Definição da estrutura Ponto
struct Ponto
{
    int x;
    int y;
};

// Definição da estrutura Retangulo
struct Retangulo
{
    struct Ponto superiorEsquerdo;
    struct Ponto inferiorDireito;
};

// Função para verificar se o ponto está dentro do retângulo
int pontoDentroDoRetangulo(struct Retangulo retangulo, struct Ponto ponto)
{
    if (ponto.x >= retangulo.superiorEsquerdo.x &&
        ponto.x <= retangulo.inferiorDireito.x &&
        ponto.y >= retangulo.superiorEsquerdo.y &&
        ponto.y <= retangulo.inferiorDireito.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct Retangulo retangulo;
    struct Ponto ponto;

    printf("Digite as coordenadas do ponto superior esquerdo do retângulo (x y): ");
    scanf("%d %d", &retangulo.superiorEsquerdo.x, &retangulo.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito do retângulo (x y): ");
    scanf("%d %d", &retangulo.inferiorDireito.x, &retangulo.inferiorDireito.y);

    printf("Digite as coordenadas do ponto a ser verificado (x y): ");
    scanf("%d %d", &ponto.x, &ponto.y);

    if (pontoDentroDoRetangulo(retangulo, ponto))
    {
        printf("O ponto está dentro do retângulo.\n");
    }
    else
    {
        printf("O ponto NÃO está dentro do retângulo.\n");
    }

    return 0;
}
