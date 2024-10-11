#include <stdio.h>

void main()
{
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if(idade <18 ){
            printf("voce posui %d anos e menor de idade",idade);
    } else if (idade >18){
        printf("Voce possui %d anos e maior de idade",idade);
    }

}
