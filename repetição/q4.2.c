#include <stdio.h>

int main() {
    int count = 0;
    int num = 1;

    printf("Os cinco primeiros números positivos múltiplos de 3 são:\n");

    while (count < 5) {
        if (num % 3 == 0) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
