#include <stdio.h>
#include <stdlib.h>

void main (){
    float fc (float f){
        return (f - 32)*(5/9);
    }

    float f, c = fc(f)
    printf ("Digite o valor de Fahrenheit. \n");
    scanf ("%.1f", &f);
    
    printf ("O valor de %.1f em Celsius é igual a: %.1f. \n", f, c);
    
}