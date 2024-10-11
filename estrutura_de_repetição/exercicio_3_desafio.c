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
    while(n1 <= n2)
    {
         printf("%d \n", n1);
    n1 = n1 + 1;
    }
    else if(n1 >= n2)
        while(n1 >= n2)
    {
         printf("%d \n", n1);
    n1 = n1 - 1;
    }
    else
        printf("Os numeros sao iguais :(");

    printf("Dejeja terminar a contagem\n - 1 para continuar\n - 2 para terminar\n");
    scanf("%d", &n3);
    }

printf("\n Terminou a contagem ;)");

}
