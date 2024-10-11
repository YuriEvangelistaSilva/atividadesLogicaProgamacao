#include <stdio.h>

void main()
{
    int contador,n2;
    n2=0;
    for(contador=1;contador<=10;contador++)
    {
        n2= n2 + contador;
        printf("%d \n",n2);
    }
    printf("A soma dos numeros 1 a 10 = %d \n",n2);
}
