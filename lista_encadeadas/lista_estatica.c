#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 20

typedef struct
{
    int identificacao;
    int idade;
    float peso;
    float altura;
} cadastro;

typedef struct
{
    cadastro dado[MAX_SIZE];
    int size;
} lista_estatica;

void inicializacao(lista_estatica *lista)
{
    lista->size = 0;
}

bool insercaoPos (lista_estatica* lista, cadastro dado, int pos){
    if (lista->size >= MAX_SIZE || pos < 0 || pos > lista->size){
        return false;
    }
   
    for (int i = lista->size; i > pos; i--)
    {
       lista->dado[i] = lista->dado[i-1];
    }
    
    lista->dado[pos] = dado; 
    lista->size++;

    return true;
}

bool insercao (lista_estatica* lista, cadastro dado){
    if(lista->size >= MAX_SIZE){
        return false;
    }

    lista->dado[lista->size] = dado;
    lista->size++;

    return true;
}

void impressao(lista_estatica lista){
    for (int i = 0; i < lista.size; i++)
    {
        if(i != 0) printf("\n");
        printf("\nIdentificacao: %d\nIdade: %d\nAltura: %.2f\nPeso: %.2f", lista.dado[i].identificacao, lista.dado[i].idade, lista.dado[i].altura, lista.dado[i].peso);
    }
    
}

void copiar (lista_estatica lista1, lista_estatica* lista2){
    lista2->size = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        lista2->dado[i] = lista1.dado[i];
    }
}



int main()
{
    lista_estatica myList, copia;
    inicializacao(&myList);

    cadastro dado[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; i++){
        dado[i].identificacao = i+1;
        dado[i].idade = i+1;
        dado[i].altura = i+1;
        dado[i].peso = i+1;
    }

    for (int i = 0; i < MAX_SIZE; i++)
    {
        insercaoPos(&myList, dado[i], i);
    }
    copiar(myList, &copia);
    impressao(myList);
    impressao(copia);
    return 0;
}
