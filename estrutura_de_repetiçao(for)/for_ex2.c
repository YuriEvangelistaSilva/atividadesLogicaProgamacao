#include <stdio.h>

void main()
{
    float num1 , num2, soma;
    char opicao;

    for(opicao = 's';opicao =='s'|| opicao =='S';opicao)
    {
        printf("Digite um numero:");
        scanf("%f", &num1);
        printf("Digite outro numero");
        scanf("%f", &num2);
        soma = num1 + num2;
        printf("A soma de %0.2f + %0.2f = %0.2f \n\n",num1,num2,soma);
        printf("Deseja continuar o calculo da soma de outros numeros ?\n");
        printf("Tecle [s] para continuar ou [N] para terminar:");
        scanf("%c", &opicao);
    }
    printf("o progama terminou");
}
