#include <stdio.h>
#include <stdlib.h>

void main()
{
    float num1, num2, r1;

    printf("Qual o valor do produto: ");

    scanf("%f", &num1);

    printf("Quamtas parcelas dejeja pagar:");

    scanf("%f" , &num2);

    r1= num1 / num2;

    printf("o vlor da parcela e %.1f", r1);
}
