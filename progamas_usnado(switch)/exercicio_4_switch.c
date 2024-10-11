#include <stdio.h>
#include <locale.h>

void main()

{
    int sabor;
    printf("Escolha o sabor da sua pizza \n");
    printf(" [1] pizza de queijo \n");
    printf(" [2] pizza de peperone \n");
    printf(" [3] pizza de calabreza \n");
    printf(" [4] pizza de frango \n");
    printf(" Digite o numero do sabor escolhido:");
    scanf("%d" , &sabor);

    switch (sabor)
    {
    case 1:
    printf("Pizza 1 escolhida - recheio queijo com azeitonas \n valor: R$ 40,00");
    break;

case 2:
    printf("Pizza 2 escolhida - recheio de peperone com chedar \n valhor: R$ 50,00");
    break;

case 3:
    printf(" Pizza 3 escolhida - recheio de calabresa com presunto \n valor R$ 47,50");
    break;

case 4:
    printf(" Pizza 4 escolhida - recheio de frango com catupiri \n valor R$ 45,00");
    break;
    }
}
