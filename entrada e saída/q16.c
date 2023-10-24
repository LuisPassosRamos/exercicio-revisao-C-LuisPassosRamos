#include<stdio.h>
/*Em uma eleição sindical concorreram ao cargo de presidente três candidatos (A, B e C).
Durante a apuração dos votos foram computados votos nulos e votos em branco,
além dos votos válidos para cada candidato.
Deve ser criado um programa de computador que efetue a leitura da quantidade de votos válidos para cada candidato,
além de efetuar também a leitura da quantidade de votos nulos e votos em branco.
Ao final o programa deve apresentar*/
int main()
{
    //Declaracao das variaveis;
    int A = 0;
    int B = 0;
    int C = 0;
    int votosNulos = 0;
    int votosBrancos = 0;
    int keyb;
    //Estrutura de repeticao para solicitar o voto e fazer o teste logico;
    for (int i = 0; i < 10; i++)
    {
        //Solicitando e guardando o voto do usuario;
        printf("Digite o numero do candidato \n(A=1, B=2, C=3, Branco=0)\n");
        scanf("%d", &keyb);
        //Teste logico para incrementacao das variaveis dos cadidatos;
        switch (keyb)
        {
        case 1:
            A++;
            break;
        case 2:
            B++;
            break;
        case 3:
            C++;
            break;
        case 0:
            votosBrancos++;
            break;
        default:
            votosNulos++;
            break;
        }
    }
    //Imprimindo todos os votos ao usuario.
    printf("Votos no candidato A: %d\nVotos no candidato B: %d\nVotos no candidato C: %d\nVotos brancos: %d\nVotos nulos: %d", A, B, C, votosBrancos, votosNulos);
    return 0;
}
