#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

void main()
{
    int n1 , n2, r1, r2, r3;
    setlocale(LC_ALL,"");

    printf("digite um numero:");
    scanf("%d", &n1);
    printf("Digite outro numero:");
    scanf("%d", &n2);

    r1= (n1 > n2) && (n1 == n2);
    printf("%d > %d e %d == %d resultado e %d \n", n1,n2,n1,n2,r1);

    r2= (n1 <= n2) || (n1 != n2);
    printf("%d <= %d ou %d != %d resultado e %d \n",n1,n2,n1,n2,r2);

    r3 = !(n1 < n2);
    printf("n�o (%d < %d ) resultado e %d \n",n1,n2,r3);
}
