#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar dados de alunos
struct Aluno {
    int matricula;
    char nome[81];
    float media;
    struct Aluno* proximo;
};

// Estrutura para uma lista simplesmente encadeada de inteiros
struct Lista {
    int valor;
    struct Lista* proximo;
};

// Função para inserir um novo aluno em ordem crescente pela matrícula
void inserirAluno(struct Aluno** lista, int matricula, const char* nome, float media) {
    struct Aluno* novoAluno = (struct Aluno*)malloc(sizeof(struct Aluno));
    if (novoAluno == NULL) {
        printf("Erro: Memória insuficiente para criar novo aluno.\n");
        exit(1);
    }

    novoAluno->matricula = matricula;
    strncpy(novoAluno->nome, nome, sizeof(novoAluno->nome) - 1);
    novoAluno->nome[sizeof(novoAluno->nome) - 1] = '\0';
    novoAluno->media = media;

    if (*lista == NULL || matricula < (*lista)->matricula) {
        novoAluno->proximo = *lista;
        *lista = novoAluno;
    } else {
        struct Aluno* atual = *lista;
        while (atual->proximo != NULL && matricula > atual->proximo->matricula) {
            atual = atual->proximo;
        }
        novoAluno->proximo = atual->proximo;
        atual->proximo = novoAluno;
    }
}

// Função para separar a lista em duas a partir da primeira ocorrência de n
struct Lista* separa(struct Lista* l, int n) {
    struct Lista* atual = l;

    while (atual != NULL) {
        if (atual->valor == n) {
            struct Lista* segundaLista = atual->proximo;
            atual->proximo = NULL;
            return segundaLista;
        }
        atual = atual->proximo;
    }

    return NULL;
}

// Função para concatenar L2 no final de L1
void concatena(struct Lista* l1, struct Lista* l2) {
    if (l1 == NULL) {
        l1 = l2;
    } else {
        struct Lista* atual = l1;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = l2;
    }
}

// Função para construir uma lista a partir de um vetor de inteiros
struct Lista* construirLista(int vetor[], int n) {
    struct Lista* lista = NULL;
    struct Lista* atual = NULL;

    for (int i = 0; i < n; i++) {
        struct Lista* novoNo = (struct Lista*)malloc(sizeof(struct Lista));
        novoNo->valor = vetor[i];
        novoNo->proximo = NULL;

        if (atual == NULL) {
            lista = novoNo;
            atual = novoNo;
        } else {
            atual->proximo = novoNo;
            atual = novoNo;
        }
    }

    return lista;
}

// Função para trocar elementos de posição
void trocaPosicao(struct Lista* l, int pos1, int pos2) {
    if (l == NULL || pos1 == pos2) {
        return;
    }

    struct Lista* no1 = l;
    struct Lista* no2 = l;
    struct Lista* anterior1 = NULL;
    struct Lista* anterior2 = NULL;
    int contador = 0;

    while (no1 != NULL && contador != pos1) {
        anterior1 = no1;
        no1 = no1->proximo;
        contador++;
    }

    contador = 0;

    while (no2 != NULL && contador != pos2) {
        anterior2 = no2;
        no2 = no2->proximo;
        contador++;
    }

    if (no1 == NULL || no2 == NULL) {
        printf("Posições inválidas.\n");
        return;
    }

    if (anterior1 != NULL) {
        anterior1->proximo = no2;
    } else {
        l = no2;
    }

    if (anterior2 != NULL) {
        anterior2->proximo = no1;
    } else {
        l = no1;
    }

    struct Lista* temp = no1->proximo;
    no1->proximo = no2->proximo;
    no2->proximo = temp;
}

// Função para imprimir a lista de alunos
void imprimirListaAlunos(struct Aluno* lista) {
    printf("Lista de Alunos:\n");
    while (lista != NULL) {
        printf("Matrícula: %d, Nome: %s, Média: %.2f\n", lista->matricula, lista->nome, lista->media);
        lista = lista->proximo;
    }
}

// Função para imprimir a lista de inteiros
void imprimirListaInteiros(struct Lista* lista) {
    printf("Lista de Inteiros:\n");
    while (lista != NULL) {
        printf("%d ", lista->valor);
        lista = lista->proximo;
    }
    printf("\n");
}

int main() {
    struct Aluno* listaAlunos = NULL;
    struct Lista* listaInteiros = NULL;

    // 1. Inserir alunos em ordem crescente
    inserirAluno(&listaAlunos, 12345, "João", 8.5);
    inserirAluno(&listaAlunos, 56789, "Maria", 7.0);
    inserirAluno(&listaAlunos, 23456, "Pedro", 9.2);

    // 2. Separar a lista de inteiros
    int vetorInteiros[] = {1, 2, 3, 4, 5, 6, 7, 3, 8, 9};
    listaInteiros = construirLista(vetorInteiros, 10);
    struct Lista* segundaLista = separa(listaInteiros, 3);

    // 3. Concatenar a lista de inteiros
    int outroVetorInteiros[] = {10, 11, 12, 13};
    struct Lista* listaInteiros2 = construirLista(outroVetorInteiros, 4);
    concatena(listaInteiros, listaInteiros2);

    // 4. Trocar elementos de posição
    trocaPosicao(listaInteiros, 1, 3);

    // 1. Imprimir lista de alunos
    imprimirListaAlunos(listaAlunos);

    // 2. Imprimir lista de inteiros
    imprimirListaInteiros(listaInteiros);
    imprimirListaInteiros(segundaLista);
    return 0;
}
