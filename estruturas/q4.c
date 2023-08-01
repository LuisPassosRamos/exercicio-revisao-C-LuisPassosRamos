#include <stdio.h>
#include <math.h>

// Definição da estrutura Ponto
struct Ponto
{
    int x;
    int y;
};

// Definição da estrutura Retângulo
struct Retangulo
{
    struct Ponto superiorEsquerdo;
    struct Ponto inferiorDireito;
};

// Função para calcular a área do retângulo
int calcularArea(struct Retangulo retangulo)
{
    int base = retangulo.inferiorDireito.x - retangulo.superiorEsquerdo.x;
    int altura = retangulo.inferiorDireito.y - retangulo.superiorEsquerdo.y;
    return base * altura;
}

// Função para calcular o comprimento da diagonal do retângulo
double calcularComprimentoDiagonal(struct Retangulo retangulo)
{
    int dx = retangulo.inferiorDireito.x - retangulo.superiorEsquerdo.x;
    int dy = retangulo.inferiorDireito.y - retangulo.superiorEsquerdo.y;
    return sqrt(dx * dx + dy * dy);
}

// Função para calcular o perímetro do retângulo
int calcularPerimetro(struct Retangulo retangulo)
{
    int base = retangulo.inferiorDireito.x - retangulo.superiorEsquerdo.x;
    int altura = retangulo.inferiorDireito.y - retangulo.superiorEsquerdo.y;
    return 2 * (base + altura);
}

int main()
{
    struct Retangulo retangulo;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%d %d", &retangulo.superiorEsquerdo.x, &retangulo.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%d %d", &retangulo.inferiorDireito.x, &retangulo.inferiorDireito.y);

    int area = calcularArea(retangulo);
    double diagonal = calcularComprimentoDiagonal(retangulo);
    int perimetro = calcularPerimetro(retangulo);

    printf("Área do retângulo: %d\n", area);
    printf("Comprimento da diagonal do retângulo: %.2f\n", diagonal);
    printf("Perímetro do retângulo: %d\n", perimetro);

    return 0;
}