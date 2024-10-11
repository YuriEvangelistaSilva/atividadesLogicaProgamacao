#include <stdio.h>

void main()
{
    int n1, r1, r2;
    printf("Informe o numero de cadeiras que iria comprar: ");
   scanf("%d", &n1);
   switch(n1 <= 50)
   {
   case 1:
    r1 = n1 * 45;
    printf("O total a pagar = R$ %d,00", r1);
    break;

   case 0:
    r2 = n1 * 40;
    printf("O total a pagar = R$ %d,00", r2);
    break;

   default:
    printf("Opcao invalida");
   }

}
