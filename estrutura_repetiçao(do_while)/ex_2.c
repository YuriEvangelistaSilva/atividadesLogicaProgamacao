#include <stdio.h>

void main()
{
    float num1,num2,soma;
    char opcao;

    do
    {
        printf("Digite um numero: ");
        scanf("%f", &num1);
        printf("Digite outro numero: ");
        scanf("%f",&num2);
        soma = num1 + num2;
        printf("A soma de %0.2f + %0.2f = %0.2f \n\n", num1,num2,soma);
        printf("Dejesa continuar o cálculo da soma de outros numeros? \n");
        printf("Tlecle [S] para continuar [N] para terminar: ");
        scanf(" %c", &opcao);
        printf("\n");
    }
    while(opcao=='s' || opcao == 'S');
        printf("O progama acabou");
}
