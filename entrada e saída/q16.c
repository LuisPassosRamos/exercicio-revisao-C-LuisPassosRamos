#include<stdio.h>
/*Em uma elei��o sindical concorreram ao cargo de presidente tr�s candidatos (A, B e C).
Durante a apura��o dos votos foram computados votos nulos e votos em branco,
al�m dos votos v�lidos para cada candidato.
Deve ser criado um programa de computador que efetue a leitura da quantidade de votos v�lidos para cada candidato,
al�m de efetuar tamb�m a leitura da quantidade de votos nulos e votos em branco.
Ao final o programa deve apresentar*/
int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int votosNulos = 0;
    int votosBrancos = 0;
    int keyb;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero do candidato \n(A=1, B=2, C=3, Branco=0)\n");
        scanf("%d", &keyb);
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
    printf("Votos no candidato A: %d\nVotos no candidato B: %d\nVotos no candidato C: %d\nVotos brancos: %d\nVotos nulos: %d", A, B, C, votosBrancos, votosNulos);
    return 0;
}
