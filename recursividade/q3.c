#include <stdio.h>

void impressao(int num, int num1) {
    if (num <= num1) {
        printf("%d ", num); // Imprime o n�mero atual
        impressao(num + 1, num1); // Chamada recursiva para o pr�ximo n�mero
    }
}

int main() {
    impressao(0, 5);
    return 0;
}
