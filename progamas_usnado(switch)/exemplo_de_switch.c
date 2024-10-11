#include <stdio.h>
void main()
{
    char estadoCivil;

    printf("Digite [c] para casado (a) \n");
    printf("Digite [s] para solteiro (a) \n");
    printf("Digite [d] para divorciado (a) \n");
    printf("Digite [v] para viuvo (a) \n");
    printf("Qual e o seu estado civil: ");
    scanf("%c" , &estadoCivil);

    switch (estadoCivil)
    {
        case'c':
        case'C':
            printf("\n O estado civil selecionado e casado (a) \n");
            break;
        case'S':
        case's':
            printf("\n O sestado civil selecionado e solteiro (a) \n");
        case'D':
        case'd':
            printf("\n O estado vivil selecionado e divorciado (a)");
        case'V':
        case'v':
            printf("\n O estado civil selecionado e viuvo (a) ");
            break;
        default:
            printf("\n Opicao invalida \n");
    }


}
