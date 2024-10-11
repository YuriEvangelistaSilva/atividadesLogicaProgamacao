#include <stdio.h>

void main()
{
    int num1,num2;

    printf("digite o numro inicial da comtagem:");
    scanf("%d", &num1);
    printf("Digite o numero final da contagem:");
    scanf("%d", &num2);
    do
    {
        printf("%d \n",num1);
        num1++;
    }
     while(num1 <= num2);
}
