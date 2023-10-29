#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 5

typedef struct
{
    int dado[MAX_SIZE];
    int size;
} lista_estatica;

void inicializar(lista_estatica *lista)
{
    lista->size = 0;
}

bool insercao(lista_estatica *lista, int dado)
{
    if (lista->size >= MAX_SIZE)
    {
        return false;
    }

    lista->dado[lista->size] = dado;
    lista->size++;

    return true;
}



int main()
{
    lista_estatica myList;
    inicializar(&myList);

    for (int i = 0; i < 6; i++)
    {
        if(insercao(&myList, i)){
            printf("\nO dado foi inserido com sucesso.");
        }else{
            printf("\nA lista ja chegou no tamanho maximo");
        }
    }


    return 0;
}
