#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float f, c;
    printf ("Digite a temperatura em Fahrenheit. \n");
    scanf ("%f", &f);

    c = ((f-32)*(5/9));

    printf ("%.2f em graus Celsius é igual a: %.2f \n", f, c);
    return 0;
}