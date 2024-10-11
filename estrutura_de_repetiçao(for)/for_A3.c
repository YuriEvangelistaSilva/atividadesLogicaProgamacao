#include <stdio.h>

void main()
{
   int num1,num2;
   printf("digite um numero inicial da contagem:");
   scanf("%d",&num1);
   printf("digite o numero final da contagem:");
   scanf("%d",&num2);
   for(;num1<=num2;num1++)
   {
       printf("%d \n",num1);
   }
}
