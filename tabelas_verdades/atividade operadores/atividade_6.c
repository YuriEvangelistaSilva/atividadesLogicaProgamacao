#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float n1,n2,r1;

    char nome[50];

    printf("informe o nome do vendedor:");

    gets(nome);

    printf("informe o salario minimo:");

    scanf("%f", &n1);

    printf("imforme o total de vendas efetuadas no mes:");

    scanf("%f", &n2);

    r1= n2 * 15 / 100 + n1;

    printf("o vendedor %s recebeu no final do mes %.2f",nome, r1);

}
