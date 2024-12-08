#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, media;
    char respost[4], name[20];
    printf("hello my friend,what your name?");
    scanf("%s", name);
    printf("\ni'm need you %s for written code, of corse? (yes or no)", name);
    scanf("%3s", respost);
    printf("\nnow talk me a number whole (a):");
    scanf("%d", &a);
    printf("\nother number whole (b):");
    scanf("%d", &b);

    a = a + b;
    b = b - a;
    media = (a + b) / 2;
    if (a <= 10)
    {
        if (b <= 13)
        {
            printf("\noh shit");
        }
        else
        {
            printf("\noh ");
        }
        printf("\nanything but not%s ", name);
    }
    else
    {
        printf("\ndon't make love in SP pls!\n ");
    }
    system("cls");
    printf("\nis here your result's %s, media %d of item (a) %d and result item (b) %d\n", name, media, a, b);

    system("pause");
    return 0;
}