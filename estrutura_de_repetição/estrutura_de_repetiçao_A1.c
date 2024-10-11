#include <stdio.h>

void main()
{
    int n1,dobro;
    n1=1;
    dobro=1;
    while( n1<=10 && dobro<=20)
    {
          printf("O dobro do numero %d = %d \n",n1,dobro);
          n1++;
          dobro=n1+n1;

    }

}
