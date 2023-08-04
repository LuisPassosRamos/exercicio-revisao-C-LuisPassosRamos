#include <stdio.h>

// Definição da estrutura Hora
struct Hora {
    int hora;
    int minuto;
    int segundo;
};

// Função para comparar as horas (usada na busca da maior hora)
int compareHoras(const struct Hora *h1, const struct Hora *h2) {
    if (h1->hora < h2->hora)
        return -1;
    else if (h1->hora > h2->hora)
        return 1;
    else {
        if (h1->minuto < h2->minuto)
            return -1;
        else if (h1->minuto > h2->minuto)
            return 1;
        else {
            if (h1->segundo < h2->segundo)
                return -1;
            else if (h1->segundo > h2->segundo)
                return 1;
            else
                return 0;
        }
    }
}

int main() {
    struct Hora horas[5];

    // Leitura dos dados das horas
    printf("Entre com os dados das horas (formato hh:mm:ss):\n");
    for (int i = 0; i < 5; i++) {
        printf("Hora %d: ", i + 1);
        scanf("%d:%d:%d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
    }

    // Buscar a maior hora no vetor
    struct Hora maiorHora = horas[0];
    for (int i = 1; i < 5; i++) {
        if (compareHoras(&horas[i], &maiorHora) == 1) {
            maiorHora = horas[i];
        }
    }

    // Exibir a maior hora
    printf("\nA maior hora no vetor é: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.minuto, maiorHora.segundo);

    return 0;
}
