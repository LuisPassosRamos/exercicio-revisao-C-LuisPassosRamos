#include <stdio.h>

void impressao(int num, int num1) {
    if (num <= num1) {
        printf("%d ", num); // Imprime o número atual
        impressao(num + 1, num1); // Chamada recursiva para o próximo número
    }
}

int main() {
    impressao(0, 5);
    return 0;
}
