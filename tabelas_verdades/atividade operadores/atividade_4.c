#include <stdio.h>
#include <math.h>
#include <stdio.h>

void main()
{
    float n1,n2,r1;

    printf("Digite seu peso:");

    scanf("%f", &n1);

    printf("digite sua altura:");

    scanf("%f", &n2);

    r1= n1 / (n2*n2);

    printf("o seu IMC = %.2f", r1);
}
