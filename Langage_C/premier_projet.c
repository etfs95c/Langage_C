#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>


/*
void ch6_4_ex2()
{
    
    return 0;
}
*/
/*void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void drawboite(ltexte, couleur)
{
    COORD pos = csbi.dwCursorPosition;
    ltexte = ltexte + 2;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), couleur);
    for (int i = 0; i < ltexte; i++)
    {
        putchar('-');
    }
    printf("\n\n\n\n");
    for (int i = 0; i < ltexte; i++)
    {
        putchar('-');
    }
}

int main()
{
    int x_max = 30, y_max = 15;
    //1€ = 6.55759 francs
    gotoxy(x_max / 2, 0);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    printf("Choisissez ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("le type de ");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    printf("conversion :");

    gotoxy(x_max / 4, y_max / 2);
    drawboite(8, 9);

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    return 0;
}*/

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
void tresor(int tresor_x, int tresor_y, int x, int y)
{
    COORD T;
    T.X = tresor_x;
    T.Y = tresor_y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), T);
    putchar('T');
    gotoxy(x, y);
}

int main()
{
    int fin = 0, res, x, y;
    const int TX = 20, TY = 15;
    int score = 0;

    srand(time(NULL));
    x = rand() % TX;
    y = rand() % TY;

    COORD Score;
    Score.X = TX;
    Score.Y = TY / 2;

    textcolor(12);
    gotoxy(x, y);
    putchar('X');

    int tresor_x = 0, tresor_y = 0;
    srand(time(NULL) * 3.14);
    tresor_x = rand() % TX;
    tresor_y = rand() % TY;

    tresor(tresor_x, tresor_y, x, y);


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
            if (y < 0)
                y = TY;
            if (y > TY)
                y = 0;
            gotoxy(x, y);
            putchar('X');
            if ((tresor_x == x) && (tresor_y == y))
            {
                score++;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Score);
                printf("\tScore : %i", score);
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
                gotoxy(x, y);
                srand(time(NULL) * 3.14);
                tresor_x = rand() % TX;
                tresor_y = rand() % TY;
                tresor(tresor_x, tresor_y, x, y);
            }
        }

    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    return 0;
}