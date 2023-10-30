int main()
{
    return 0;
}

typedef int TipoChave;

typedef struct
{
    TipoChave chave;
} TipoItem;

typedef struct TipoCelula *Apontador;

struct TipoCelula
{
    TipoItem Item;
    Apontador Prox;
};

typedef struct(
    Apontador Primeiro, Ultimo;
    int tamanho;) TipoLista;

void Inicia(TipoLista *Lista)
{
    Lista->Primeiro = (Apontador)malloc(sizeof(struct TipoCelula));
    Lista->Ultimo = Lista->Primeiro;
    Lista->Primeiro->Prox = NULL;
    Lista->tamanho = 0;
}

// Implemente a Operacao Vazia verifica se primeiro == ultimo

// A insercao sera feita `a direita do ponteiro Ultimo
void Insere(TipoItem x, TipoLista *Lista)
{
    Lista->Ultimo->Prox = (Apontador)malloc(sizeof(struct TipoCelula));
    Lista->Ultimo = Lista->Ultimo->Prox;
    Lista->Ultimo->Item = x;
    Lista->Ultimo->Prox = NULL;
    Lista->tamanho = Lista->tamanho + 1;
}

// Implemente a Operacao Imprimir
