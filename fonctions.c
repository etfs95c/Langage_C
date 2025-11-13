#include <stdio.h>
#include <stdint.h>

int start() //aka le prog fait avec les premières connaissances du livres
{
    printf("hello world \n");
    int a = 5;
    double b = 5.6456845 ;

    printf("%d \t" "%f \n", a, b);
    printf("%f \t" "%d \n", b, a);

    scanf("%i", &a);
    scanf("%lf", &b);
    rewind(stdin);

    printf("%d \t" "%f \n", a, b);
    printf("%f \t" "%d \n", b, a); 
    printf("octets de a=%ld ; octets de b=%ld \n", sizeof(a),sizeof(b));
    printf("Les adresses mémoires de a et b sont, respectivements, %p et %p \n", &a, &b);
    return 0;
}

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
void ch2_6_ex5()
{
    char mot[] = "Trololololol";
    unsigned int clef = 0;
    scanf("%i", &clef);
    if (clef > 127)
    {
        int compteur = 0;
        while (clef > 127)
        {
            clef = clef/2 ;
            compteur++;
        }
        printf("Clef de cryptage trop grande, le programme a modifié %i fois la clef pour générer la nouvelle clef %i. ", compteur, clef);
    }
    else
    {
        printf("Clef de crypstage compatible. ");
    }
    printf("Le mot après cryptage est :");
    int i = 0;
    while (mot[i] != '\0')
    {
        putchar(mot[i]);
        i++;
    }
    printf("\n");
}

//Exercice 6 :
void ch2_6_ex6()
{
    int a = 0, b = 1, c = 2, d = 3;
    printf("%p\n", &a);
    getchar();
    printf("%p\n", &b);
    getchar();
    printf("%p\n", &c);
    getchar();
    printf("%p\n", &d);
}

//Exercice 7 :
void ch2_6_ex7()
{
    int a ; //4o (64bits)
    double b ; //8o
    float c ; //4o
    short d ; //2o
    char e ; //1o

    printf("Entrez la variable int a :\n");
    scanf("%i", &a);
    printf("Entrez la variable double b :\n");
    scanf("%lf", &b);
    printf("Entrez la variable float c :\n");
    scanf("%f", &c);
    printf("Entrez la variable short d :\n");
    scanf("%hd", &d);
    printf("Entrez la variable char e :\n");
    rewind(stdin);
    scanf(" %c", &e);       //ajouter un espace devant le %c pour que le programme n'absorbe pas le Entrer de validation du précédent scanf
    printf("La variable char e de valeur %c, est stockée sur 1 octet à l'adresse mémoire %p\n", e, &e);
    printf("La variable short d de valeur %hd, est stockée sur 2 octets à l'adresse mémoire %p\n", d, &d);
    printf("Les variables int a de valeur %c et float c %f, sont stockée sur 4 octets aux adresses mémoires %p et %p\n", a, c, &a, &c);
    printf("La variable double b de valeur %d, est stockée sur 8 octets à l'adresse mémoire %p\n", d, &d);
}

//Exercice 8 :
void ch2_6_ex8()
{
    int ncommand;
    printf("Entrez le numéro de la commande que vous voulez exécuter : ");
    scanf("%i", &ncommand);
    if (ncommand >= 1 & ncommand <= 5)
    {
        printf("Vous voulez éxécuter la commande : %i\n", ncommand);
    }
    else
    {
        printf("La commande que vous voulez éxécuter n'existe pas\n");
    }
}

//Exercice 9 :
void ch2_6_ex9()
{
    int l = 1, h = 1, n = 1;
    char go = 'n';
    while (go == 'n'|| go == 'N')
    {
        rewind(stdin);
        printf("Entrez la largeur du dessin : ");
        scanf("%i", &l);
        printf("\nEntrez la hauteur du dessin : ");
        scanf("%i", &h);
        printf("\nEntrez le nombre de caractère utilisés dans le dessin : ");
        scanf("%i", &n);
        
        printf("Vous avez paramétrer un dessin de taille %ix%i avec %i caractère(s). Est-ce correcte ?\n(Oui Y|Non N)", l, h, n);
        scanf(" %c", &go);
    }

    char tableDeCaractere[n];
    int i = 0;
    int a = 1;
    while (i != n)
    {
        printf("Entrez le caractère n°%i\n", a);
        scanf(" %c", &tableDeCaractere[i]);
        i++;
        a++;
        printf("\n");
    }
    
    int n1 = n-1;
    while (h != 0)
    {
        int l1 = l;
        while (l1 != 0)
        {
            printf("%c", tableDeCaractere[n1]);
            l1--;
            if (n1 <= 0)
            {
                n1 = n-1;
            }
            else
            {
                n1--;
            }
        }
        printf("\n");
        h--;
    }
}

//Exercice 10 :
