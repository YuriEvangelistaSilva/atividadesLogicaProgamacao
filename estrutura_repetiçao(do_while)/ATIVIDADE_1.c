#include <stdio.h>

void main()
{
    int contador;
    contador=1;

    do
    {
        printf(" O dobro do numero %d = %d \n",contador,contador*2);
        contador++;
    }
    while(contador<=10);

}
