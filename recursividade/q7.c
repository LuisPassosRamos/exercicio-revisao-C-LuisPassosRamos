#include <stdio.h>

int potenciaRecursiva(int x, int y) {
    // Caso base: qualquer n�mero elevado a 0 � 1
    if (y == 0) {
        return 1;
    }
    // Caso recursivo: x elevado a y � igual a x * x^(y-1)
    return x * potenciaRecursiva(x, y - 1);
}

int main() {
    int x = 2; // Base
    int y = 5; // Expoente

    int resultado = potenciaRecursiva(x, y);
    printf("%d elevado a %d � igual a %d\n", x, y, resultado);

    return 0;
}
