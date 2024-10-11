#include <stdio.h>

void main()
{
    int mutiplicado,mutiplicador;
    printf("digite um numero para tabuada:");
    scanf("%d",&mutiplicado);
    mutiplicador = 0;
    do
        {
           printf("%2d x %2d = %3d \n",mutiplicado,mutiplicador,mutiplicado*mutiplicador),
           mutiplicador++;
        }
    while(mutiplicador <=10);
}
