#include <stdio.h>

void main()
{

    int n1, n2,n3;
    for(n3=1;n3==1;n3){

    printf("Digite o numero inicial da contagem: ");
    scanf("%d", &n1);
    printf("Digite o numero final da contagem: ");
    scanf("%d", &n2);
    if(n1 < n2)
        for(n1;n1<=n2;n1++)
    {
        printf("%d \n",n1);
    }
    else if(n1 > n2)
        for(n1;n1>=n2;n1--)
    {
        printf("%d \n",n1);
    }
    else
            printf("Os numeros são iguais \n");

        printf("Deseja repetir a contagem\n - 1 para repetir \n - 2 para terminar");
        scanf("%d", &n3);
        printf(" \n ")
    }
       printf("Terminou a contagem :)");
    }
