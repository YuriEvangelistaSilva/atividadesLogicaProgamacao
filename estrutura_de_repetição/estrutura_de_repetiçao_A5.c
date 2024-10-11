#include <stdio.h>

void main()
{
    int n1,n2;
    n1=0;
    n2=0;
    while(n1<=9)
    {
        n1=n1+2;
        n2=n1-1;
        printf("%d \n",n2);
    }
    printf("terminou a contagem");
}
