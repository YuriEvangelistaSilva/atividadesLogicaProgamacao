#include <stdio.h>

void main ()
{

    int n1, n2, r1, r2, r3, r4, r5, r6;

    printf("digite um numero:");
    scanf("%d",&n1);
    printf("digite outro numero:");
    scanf("%d",&n2);
    r1=n1 < n2;
    printf("%d < %d = %d \n",n1,n2,r1);
    r1=n1 > n2;
    printf("%d > %d = %d \n",n1,n2,r2);
    r1=n1 <= n2;
    printf("%d <= %d = %d \n",n1,n2,r3);
    r1= n1 >= n2;
    printf("%d >= %d = %d \n",n1,n2,r4);
    r1=n1 == n2;
    printf("%d == %d = %d \n",n1,n2,r5);
    n1 != n2;
    printf("%d != %d = %d \n",n1,n2,r6);

}
