#include <stdio.h>

int multiplicar(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        // Chamada recursiva para calcular a multiplicação
        return a + multiplicar(a, b - 1);
    }
}

int main() {
    int num1 = 5;
    int num2 = 3;
    printf("%d multiplicado por %d é igual a %d\n", num1, num2, multiplicar(num1, num2));

    return 0;
}
