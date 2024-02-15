#include <stdio.h>
#include <stdlib.h>

// Define o número máximo de alunos que podem ser cadastrados
#define MAX_ALUNOS 15

// Estrutura de Aluno
struct Aluno
{
    // Caracteristicas de um aluno:
    char nome[50];
    int matricula[10], endereco[50];
    float nota[3], media;
};

// Estrutura de Escola
struct Escola
{
    // Caracteristicas de uma escola:
    // Array do tipo Aluno para armazenar varias variaveis do tipo Aluno
    struct Aluno Alunos[MAX_ALUNOS]; // Array de Aluno

    // Quantidade total de alunos cadastrados ate o dado momento
    int quantidade_alunos;
};

//Funcao para inicializar a lista escola
void inicializarEscola(struct Escola *escola){
    escola->quantidade_alunos = 0;
}

// Função para incluir um estudante no vetor
void incluirAluno(struct Escola escola) // Parametro do tipo Escola

/*Nessa função vamos receber como parametro uma variável do tipo Escola
O objetivo é facilitar a visualizacao e a organizacao do codigo*/
{
    // If() para testar se a quantidade de alunos é menor do que o limite máximo de alunos
    if (escola.quantidade < MAX_ALUNOS)
    {
        // Aluno que vai ser adicionado no Array de alunos
        struct Aluno novoAluno;

        // Solicita informações do novo Aluno
        printf("Informe o nome do aluno:\n");
        scanf("%s", &novoAluno.nome);

        /*A matricula do aluno deve ser criada automaticamente, evitando duplicidades
        Alem de ficar mais facil a manipulacao*/
        novoAluno.matricula = escola.quantidade_alunos + 1;

        printf("Informe o endereço do  aluno:\n");
        scanf("%d", &novoAluno.endereco);


        // Estrutura de repeticao que registra a nota dos alunos
        for (int i = 0; i < 3; i++)
        {
            printf("Informe a nota %d do  aluno:\n", i + 1);
            scanf("%f", &novoAluno.nota[i]);
        }

        // Calculo de media do aluno de acordo com as tres notas informadas
        novoAluno.media = (novoAluno.nota[0]+novoAluno.nota[1]+novoAluno.nota[2])/3

        // Adiciona o novo estudante ao vetor
        escola.Alunos[escola.quantidade] = novoAluno;

        // Incrementa a quantidade de estudantes
        escola.quantidade++;

        printf("Estudante cadastrado com sucesso!\n");
    }
    else
    {
        printf("Limite de estudantes atingido. Não é possível incluir mais estudantes.\n");
    }
}

int main()
{
    struct Escola escola;
    inicializarEscola(escola);

    int opcao;

    printf("Seja Bem-Vindo!\nO nosso programa tem como objetivo registrar estudantes e suas notas.\n\n");

    do
    {
        printf("Menu:\n[1]- Incluir estudante\n[2]- Excluir estudante\n[3]- Lista de estudantes\n[4]- Apresentar médias\n[0]- Sair\n\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // Incluir estudante
            int quantidade;
            printf("Quantos alunos voce quer incluir?")
            scanf("%d", &quantidade);

            for (int i = 0; i < quantidade; i++){
                incluirAluno(escola);
            }

            break;
        }

        // case 2: // Excluir estudante
    }
    
    return 0;
}
