#include <stdio.h>

void main()
{
    int cont1, cont2;

    for(cont1 = 0;cont1<=5;cont1++)
    {
    printf("=====================================\n");
    printf("Tabuada do numero: %d \n", cont1);
    printf("=====================================\n");

    for(cont2=0;cont2 <= 10 ;cont2++)
    {
        printf("%3d  x %3d= %3d \n",cont1 , cont2, cont1 * cont2);
    }
    }
            printf("\n");
    printf("Fin da tabuada :) \n");
}
