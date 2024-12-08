#include <stdio.h>
#include <stdlib.h>
// você consegue perceber o qual burro você está sendo ao nem a
// ter a capacidade de enteder os próprios erros de escrita do seu code
// eu ainda vou aprender a usar está linguagem, custe o que custar!!!§


int main()
{
    int number01, number02;
    int soma = 0;

    printf("Hello, World\n");

    printf("Write a number: ");
    scanf("%d", &number01);

    printf("Write another number: ");
    scanf("%d", &number02);

    soma = number01 + number02;

        printf("The sum of the numbers %d and %d is %d.\n", number01, number02, soma);

    system("pause");
    return 0;
}
