#include <stdio.h>
//bliblioteca de acemtua��o
#include <locale.h>
void main()
{
    setlocale(LC_ALL,"");
    float num;
    printf("Digite um n�mero: ");
    scanf("%f", &num);
    printf("O n�mero digitado foi %.2f,",num);
}
