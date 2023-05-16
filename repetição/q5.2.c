#include <stdio.h>

int main() {
    int count = 0;
    int num = 2;  
    int soma = 0;

    printf("Calculando a soma dos 50 primeiros números pares:\n");

    while (count < 50) {
        soma += num;
        num += 2; 
        count++;
    }

    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}
