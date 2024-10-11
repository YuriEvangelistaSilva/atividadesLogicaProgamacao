#include <stdio.h>

void main()
{

    float n1,r1;
    int n2;

    printf("Informe o valor do produto:");
    scanf("%d", &n1);
    printf("forma de pagamento \n");
    printf("1 - avista \n");
    printf("2 - a praso \n");
    printf("escolha forma de pagamento( 1 ou 2):");
    scanf("%d", &n2);

    r1= n1 - (n1 - 0.10);

    if(n2 == 1)

        printf("o total a pagar a vista = %f",r1);

    else if (n2 == 2)

        printf("o total a pagar a prazo =%f",n1);


}
