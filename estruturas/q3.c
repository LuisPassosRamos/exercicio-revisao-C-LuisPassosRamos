/*Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles.*/
//dAB² = (xB – xA)² + (yB – yA)².
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos
{
    int x;
    int y;
};
struct pontos distância(struct pontos coordenada[0], struct pontos coordenada[1])
{
    return (sqrt(pow((coordenada[0].x - coordenada[0].y), 2) + pow((coordenada[1].x - coordenada[1].y), 2)))
}

void main()
{
    struct pontos coordenada[2];
    printf ("Informe os pontos da primeira coordenada: (x,y) \n");
    scanf ("%d %d", &coordenada[0].x, &coordenada[0].y);

    printf ("Informe os pontos da primeira coordenada: (x,y) \n");
    scanf ("%d %d", &coordenada[1].x, &coordenada[1].y);

    printf ("primeiro x %d primeiro y %d \n", coordenada[0].x, coordenada[0].y);
    printf ("segundo x %d segundo y %d \n", coordenada[1].x, coordenada[1].y);

    
}
