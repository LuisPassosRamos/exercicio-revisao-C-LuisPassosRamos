#include <stdio.h>
#include <stdlib.h>

struct birthday
{
    int day;
    int month;
    int year;
};

struct address
{
    char street[30];
    char district[30];
    float number;
};

struct register1
{
    char name[30];
    struct birthday date;
    struct address home;
};

struct register1 subject(void)
{
    struct register1 user[x];
    int y;
    printf("Digite seu nome:\n");
    setbuf(stdin, NULL);
    gets(user.name[y]);

    printf("Digite o dia do seu nascimento:\n");
    scanf("%d", &user.date.day);
    printf("Digite o mês do seu nascimento:\n");
    scanf("%d", &user.date.month);
    printf("Digite o ano do seu nascimento:\n");
    scanf("%d", &user.date.year);

    printf("Digite sua rua:\n");
    setbuf(stdin, NULL);
    gets(user.home.street);
    printf("Digite seu bairro:\n");
    setbuf(stdin, NULL);
    gets(user.home.district);

    printf("Digite o número da casa:\n");
    scanf("%d", &user.home.number);

    return (user);
}

void main()
{
    int x;
    printf("Digite quantas pessoas serão cadastradas.");
    scanf ("%d", x);

    subject(x);

    printf("O nome do usuário é: %s \n", user.name);
    printf("A data do nascimento do usuário é: %d/%d/%d \n", user.date.day, user.date.month, user.date.year);
    printf("A rua do usuário é: %s \n", user.home.street);
    printf("O bairro do usuário é: %s \n", user.home.district);
    printf("O número da casa do usuário é: %.0f \n", user.home.number);
}
