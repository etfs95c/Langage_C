#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>

/*
void ch4_5_ex4()
{
    
    return 0;
}
*/

int main()
{
    int max_y = 480;
    int min_y = 0;
    int max_x = 640;
    int min_x = 0;
    srand(time(NULL));
    int x = (rand()%(max_x-min_x))+min_x;
    int y = (rand()%(max_y-min_y))+min_y;
    if ((30 < x < 320) && (240 < y < 450))
    {
        printf("z1\n");
        printf("%i\t%i\n", x, y);
    }
    else if ((320 < x < 610) && (240 < y < 450))
    {
        printf("z2\n\n");
        printf("%i\t%i", x, y);
    }
    else if ((30 < x < 320) && (30 < y < 240))
    {
        printf("z3\n\n");
        printf("%i\t%i", x, y);
    }
    else if ((320 < x < 610) && (30 < y < 240))
    {
        printf("z4\n\n");
        printf("%i\t%i", x, y);
    }
    else
    {
        printf("Hors zone\n");
        printf("%i\t%i\n", x, y);
    }
    
    
    return 0;
}