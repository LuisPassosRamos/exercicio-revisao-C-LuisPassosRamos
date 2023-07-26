#include <stdio.h>
#include <math.h>

struct pontos
{
    int x;
    int y;
};

float distancia(struct pontos coordenada0, struct pontos coordenada1)
{
    float dist = sqrt(pow((coordenada0.x - coordenada1.x), 2) + pow((coordenada0.y - coordenada1.y), 2));
    return dist;
}

int main()
{
    struct pontos coordenada[2];
    printf("Informe os pontos da primeira coordenada: (x, y)\n");
    scanf("%d %d", &coordenada[0].x, &coordenada[0].y);

    printf("Informe os pontos da segunda coordenada: (x, y)\n");
    scanf("%d %d", &coordenada[1].x, &coordenada[1].y);

    printf("Primeiro x: %d, Primeiro y: %d\n", coordenada[0].x, coordenada[0].y);
    printf("Segundo x: %d, Segundo y: %d\n", coordenada[1].x, coordenada[1].y);
    
    printf("A distância entre os pontos é: %f\n", distancia(coordenada[0], coordenada[1]));
    
    return 0;
}
