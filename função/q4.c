#include <stdio.h>
#include <stdlib.h>

int perguntaQuantidadeEntrevistados(){
    int quantidadePessoas;
    printf("Quantas pessoas serão entrevistadas?");
    scanf("%d", &quantidadePessoas);    
    printf("Quantas pessoas serão entrevistadas %d\n", quantidadePessoas);
    return quantidadePessoas;
}

int main(int argc, char const *argv[]){
    int quantidadePessoas = perguntaQuantidadeEntrevistados();
    char nome[quantidadePessoas][30];
    int idades[quantidadePessoas];
    for (int i = 0; i < quantidadePessoas; i++){
        printf("Informe nome do %dº entrevistado\n",i+1);
        scanf("%s",nome[i]);
        printf("Informe idade do %dº entrevistado\n",i+1);
        scanf("%d",&idades[i]);        
    }
    for (int i = 0; i < quantidadePessoas; i++){
        printf("Nome do %dº entrevistado %s e idade %d\n",i+1, nome[i], idades[i]);
    }

    return 0;
}

