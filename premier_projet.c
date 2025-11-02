#include <stdio.h>
#include <stdint.h>

/*
void ch2_6_ex7()
{
    
}
*/
void tableau_ANSI()
{
    int row, col, n;

    for (row = 0; row < 11; row++) {
        for (col = 0; col < 10; col++) {
            n = 10 * row + col;
            if (n > 109) break;
            printf("\033[%dm %3d\033[m", n, n);
        }
        printf("\n");
    }
}

int main()
{
    /*printf("\a");
    printf("\033[0;31m Test\033[m");
    printf("\ntest");*/
    tableau_ANSI();
    return 0;
}

