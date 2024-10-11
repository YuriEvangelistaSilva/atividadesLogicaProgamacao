#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main()
{

    float n1,n2,n3,n4,media;

    printf("Digite a 1 nota:");
    scanf("%f", &n1);

    printf("digite a 2 nota:");
    scanf("%f", &n2);

    printf("Digite a 3 nota:");
    scanf("%f", &n3);

    printf("Digite a 4 nota:");
    scanf("%f", &n4);

    media=(n1+n2+n3+n4) / 4;

    if (media >6){
            printf("sua media foi %.2f e voce esta aprovado \n", media);
    } else if (media < 6 && media >= 3){
        printf("Sua media foi %.2f e voce esta em recuperaçao\n");
    } else {
        printf("Sua media foi %.2f e voce esta reprovado \n",media);
    }
}
