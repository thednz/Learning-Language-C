#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numberTest01, numbeTest02, soma;
    printf("here teste with table of values in c!! \n");
    printf("choose an number! whole \n");
    scanf("%f", &numberTest01);
    printf("now other whole \n");
    scanf("%f", &numbeTest02);
    soma = numberTest01 + numbeTest02;

    printf("Result of numbers is %0.3f and %0.3f and finale %0.3f", numberTest01, numbeTest02, soma);
    system("pause");
    return 0;
}
