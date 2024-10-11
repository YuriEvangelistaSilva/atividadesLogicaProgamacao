#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{
    char nome[50];
    printf("Digite o nome de aluno: ");
    gets(nome);
    float n1,n2,n3,n4,r1;

    printf("Digite a 1 nota:");
    scanf("%f", &n1);

    printf("digite a 2 nota:");
    scanf("%f", &n2);

    printf("Digite a 3 nota:");
    scanf("%f", &n3);

    printf("Digite a 4 nota:");
    scanf("%f", &n4);

    r1=(n1+n2+n3+n4) / 4;

    printf("a media do %s foi %.2f",nome, r1);
}
