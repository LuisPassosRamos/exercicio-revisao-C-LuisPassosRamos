#include <stdio.h>

int potenciaRecursiva(int x, int y) {
    // Caso base: qualquer número elevado a 0 é 1
    if (y == 0) {
        return 1;
    }
    // Caso recursivo: x elevado a y é igual a x * x^(y-1)
    return x * potenciaRecursiva(x, y - 1);
}

int main() {
    int x = 2; // Base
    int y = 5; // Expoente

    int resultado = potenciaRecursiva(x, y);
    printf("%d elevado a %d é igual a %d\n", x, y, resultado);

    return 0;
}
