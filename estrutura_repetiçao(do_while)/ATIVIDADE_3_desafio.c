#include <stdio.h>

void main()
{

    int n1, n2,n3;
    n3=1;
    while (n3 == 1){

    printf("Digite o numero inicial da contagem: ");
    scanf("%d", &n1);
    printf("Digite o numero final da contagem: ");
    scanf("%d", &n2);
    if(n1 < n2)
    //////////////////////////////////////////////////////
    do
    {
         printf("%d \n", n1);
    n1 = n1 + 1;
    }
     while(n1 <= n2);
    //////////////////////////////////////////////////////
    else if(n1 >= n2)
       do
    {
         printf("%d \n", n1);
    n1 = n1 - 1;
    }
     while(n1 >= n2);
    //////////////////////////////////////////////////////
    else ;

    printf("Dejeja terminar a contagem\ [1] para continuar [2] para terminar\n");
    scanf("%d", &n3);
    }

printf("\n Terminou a contagem ;) \n ");

}
