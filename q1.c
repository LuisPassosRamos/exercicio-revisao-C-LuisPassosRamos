#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
    float a, r, pi;
    printf ("Digite o valor de R: \n");
    scanf ("%f", &r);
    pi = (3.14159);
    r = (r*r);
    a = (pi*r);

    printf ("O valor da área é igual a: %.2f", a);

    return 0;
}