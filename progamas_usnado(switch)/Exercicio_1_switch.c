#include <stdio.h>

void main()
{
   int n;

   printf("Digite sua idade: ");
   scanf("%d", &n);
   switch(n >= 18)
   {
   case 1:
    printf("Voce possui %d anos e maior de idade \n", n);
    break;

   case 0:
    printf("Voce possui %d anos e menor de idade \n", n);
    break;

   default:;
    }

}
