#include <stdio.h>

void main()
{
    int contador, n2;
    contador = 1;
    n2=0;
    while(contador <= 10)
    {
          n2= n2 + contador;
          contador++;
          printf("%d\n",n2);
    }
    printf(" A soma dos numeros 1 a 10 = %d",n2);
}
