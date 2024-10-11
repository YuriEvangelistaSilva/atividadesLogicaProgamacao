#include <stdio.h>
//bliblioteca de acemtuação
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"");
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    printf("O número digitado foi %.2f,",num);
}
