#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


/*
void ch5_6_ex7()
{

    return 0;
}
*/
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void textcolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main()
{
    int fin = 0, res, x, y;
    const int TX = 20, TY = 15;

    srand(time(NULL));
    x = rand() % TX;
    y = rand() % TY;

    textcolor(12);
    gotoxy(x, y);
    putchar('X');

    while (!fin)
    {
        if (_kbhit())
        {
            gotoxy(x, y);
            putchar(' ');

            res = _getch();
            switch (res)
            {
            case 72: y--;   break;
            case 77: x++;   break;
            case 80: y++;   break;
            case 75: x--;   break;
            case 224:       break;
            default: fin = 1;  break;
            }
            if (x < 0)
                x = TX;
            if (x > TX)
                x = 0;
            if (y < TY)
                y = TY;
            if (y > TY)
                y = 0;
            gotoxy(x, y);
            putchar('X');
        }

    }

    return 0;
}