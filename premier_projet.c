#include <stdio.h>

int main()
{
    printf("hello world \n");
    char a;
    printf("Appuyez sur [Entrer] pour continuer \n");
    rewind(stdin);
    a = getchar();
    printf("%c \n", a);
    a++;
    printf("%c \n %i \n", a, a);
    return 0;
}