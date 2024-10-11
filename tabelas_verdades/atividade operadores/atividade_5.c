#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main()
{

    float n1,n2,r1;

    printf("informe a distancia percorrida (em km/h):");

    scanf("%f", &n1);

    printf("digite a quantidade de litros gastos:");

    scanf("%f", &n2);

    r1 = n1 / n2;

    printf("o consumo medio do veiculo e %.2f km/h ", r1);
    system("pause");
}
