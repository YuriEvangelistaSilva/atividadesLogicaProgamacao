#include <stdio.h>
#include <locale.h>
void main()
{
    char nome[50];
    char sexo;
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite f [feminino] ou m [masculino]: ");
    scanf("%c", &sexo);
    printf("o nome digitado &s que possui o sexo %c", nome,sexo);
}
