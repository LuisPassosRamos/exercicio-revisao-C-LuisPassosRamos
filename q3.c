#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float f, c;
    printf ("Digite a temperatura em graus Celsius. \n");
    scanf ("%f", &c);

    f = ((9*c+160)/5);

    printf ("%.2f em Fahrenheit é igual a: %.2f \n", c, f);
    return 0;
}