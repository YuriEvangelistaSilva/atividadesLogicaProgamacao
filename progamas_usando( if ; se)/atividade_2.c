#include <stdio.h>

void main()
{
    float cadeiras,resultado;

    printf("Informe o numero de cadeiras que ira comprar:");
    scanf("%f", &cadeiras);

    resultado = cadeiras >= 50 ? cadeiras *40 : cadeiras * 45;

    printf("O total a pagar = %.2f", resultado);
}
