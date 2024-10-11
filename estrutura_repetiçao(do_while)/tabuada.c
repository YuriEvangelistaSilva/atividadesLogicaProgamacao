#include <stdio.h>

void main()
{
    int cont1, cont2;

    cont1 = 1;
    cont2 = 0;
    do{

    printf("=====================================\n");
    printf("Tabuada do numero: %d \n", cont1);
    printf("=====================================\n");
    do
    {
            printf(" %d x %d = %d \n",cont1,cont2,cont1*cont2);
            cont2= cont2 + 1;
    }
    while(cont2<=10);
    cont2 = 0;
    cont1 = cont1 + 1;
    }
    while(cont1 <= 5);
    printf("\n");
    printf("Fin da tabuada");
}
