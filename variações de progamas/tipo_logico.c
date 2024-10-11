#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
void main()
{
    setlocale(LC_ALL,"");
    bool v,f;
    v = true;
    f = false;
    printf("O melhor time do Brasil é são paulo? %d \n",f);
    printf("Hoje vai chover?%d \n",v);
}
