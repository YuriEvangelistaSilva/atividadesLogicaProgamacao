#include <stdio.h>

void main()
{
    int mutiplicado,mutiplicador;
    printf("digite um numero para tabuada:");
    scanf("%d",&mutiplicado);
    mutiplicador = 0;
    while(mutiplicador <=10)
          {
           printf("%d x %d = %d \n",mutiplicado,mutiplicador,mutiplicado*mutiplicador),
           mutiplicador++;
          }
}
