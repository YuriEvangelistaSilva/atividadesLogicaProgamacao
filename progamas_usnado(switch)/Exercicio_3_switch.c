#include <stdio.h>

void main()
{
    int n1, n2, r3;
    printf("Informe o valor do produto: ");
    scanf("%d", &n1);
    printf("Forma de pagamento \n 1 - a vista \n 2 - a prazo \n");
    printf("Escolha o pagamento (1 ou 2): ");
    scanf("%d", &n2);
    switch(n2)
    {
        case 1:
        r3 = n1 -(n1 * 0.10);
        printf("O total a pagar a vista = %d", r3);
        break;

        case 2:
        printf("O total a pagar a prazo = %d", n1);
        break;

        default:
        printf(" #Opcao invalida#");

    }
}
