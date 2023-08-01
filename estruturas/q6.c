#include <stdio.h>

// Definição da estrutura Aluno
struct Aluno {
    int matricula;
    char nome[50];
    float nota1[3];
};

// Função para calcular a média geral de um aluno
float calcularMediaGeral(struct Aluno aluno) {
    return (aluno.nota1[1] + aluno.nota1[2] + aluno.nota1[3]) / 3;
}

int main() {
    struct Aluno alunos[5];
    float maiorMedia = 0;
    int indiceMaiorMedia = 0;

    printf("Digite os dados dos 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        setbuf (stdin, NULL);
        gets(alunos[i].nome);

        for (int j = 0; j < 3; j++)
        {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].nota1[j]);
        }
        

        // Calcula a média geral do aluno e verifica se é a maior média até agora
        float mediaGeral = calcularMediaGeral(alunos[i]);
        if (mediaGeral > maiorMedia) {
            maiorMedia = mediaGeral;
            indiceMaiorMedia = i;
        }

        printf("\n");
    }

    printf("\nAluno com a maior média geral:\n");
    printf("Nome: %s\n", alunos[indiceMaiorMedia].nome);
    printf("Nota 1: %.2f\n", alunos[indiceMaiorMedia].nota1[1]);
    printf("Nota 2: %.2f\n", alunos[indiceMaiorMedia].nota1[2]);
    printf("Nota 3: %.2f\n", alunos[indiceMaiorMedia].nota1[3]);
    printf("Média Geral: %.2f\n", maiorMedia);

    return 0;
}
