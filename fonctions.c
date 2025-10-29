
void dino()
{
    //image d'un dino dans le terminal
    printf("                            . - ~ ~ ~ - .\n");
    printf("      ..     _      .-~               ~-.\n");
    printf("     //|     \\ `..~                      `.\n");
    printf("    || |      }  }              /       \\  \\\n");
    printf("(\\   \\ \\~^..'                 |         }  \\\n");
    printf(" \\`.-~  o      /       }       |        /    \\\n");
    printf(" (__          |       /        |       /      `.\n");
    printf("  `- - ~ ~ -._|      /_ - ~ ~ ^|      /- _      `.\n");
    printf("              |     /          |     /     ~-.     ~- _\n");
    printf("              |_____|          |_____|         ~ - . _ _~_-_\n");
}
// Chapitre 2.6 "Mise en Pratique : Manipulation de Variables"
// Exercice 1 :
void ch2_6_ex1()
{
    int a = 654, b = 5741, c = -456;
    float d = 3.14f, e = 2.61f;
    double f = 65468795.5643879435;
    char g = 'h', h = '!';
    printf("Les valeurs des ints sont : \na = %i\nb = %i\nc = %i\n", a, b, c);
    printf("Les valeurs des float sont : \nd = %f\ne = %f\n", d, e);
    printf("La valeur du double est : \nf = %lf\n", f);
    printf("Les char sont : \ng = %c\nh = %c\n", g, h);
}

//Exercice 2 :
void ch2_6_ex2()
{
    char a = '@';
    printf("%c\n", a);
    printf("%d\n", a);
}

//Exercice 3:
void ch2_6_ex3()
{
    char a[] ="TataFaitDuZele\n";
    int i = 0;
    while (a[i] != '\0')
    {
        putchar(a[i]);
        i++;
    }
}

//Exercice 4 :
void ch2_6_ex4()
{
    char a[] = "contrainte";
    int i = 0;

    while (a[i] != '\0')
    {
        putchar(a[i]);
        i++;
    }
    i = 0;
    putchar('\n');
    //contrainte
    //fourchette
    a[0] = a[0] + 3;
    a[2] = a[2] + 7;
    a[3] = a[3] - 2;
    a[4] = a[4] - 15;
    a[5] = a[5] + 7;
    a[6] = a[6] - 4;
    a[7] = a[7] + 6;
    
    while (a[i] != '\0')
    {
        putchar(a[i]);
        i++;
    }
    putchar('\n');
}

//Exercice 5 :