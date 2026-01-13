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
void ch2_6_ex10()
{
    int v1 = 0, v2 = 0;
    printf("Entrez la valeur de V1 : ");
    scanf("%i", &v1);
    printf("Entrez la valeur de V2 : ");
    scanf("%i", &v2);
    int i1 = v1, i2 = v2;
    v2 = i1;
    v1 = i2;
    printf("Les valeurs de V1 et V2 étaient %i et %i. Elles sont devenues %i et %i.\n", i1, i2, v1, v2);
}

//Exercice 11 :
void ch2_6_ex11()
{
    int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
    printf("Entrez la valeur de V1 : ");
    scanf("%i", &v1);
    printf("Entrez la valeur de V2 : ");
    scanf("%i", &v2);
    printf("Entrez la valeur de V3 : ");
    scanf("%i", &v3);
    printf("Entrez la valeur de V4 : ");
    scanf("%i", &v4);
    printf("Entrez la valeur de V5 : ");
    scanf("%i", &v5);
    int i1 = v1, i2 = v2, i3 = v3, i4 = v4, i5 = v5;
    v1 = i2;
    v2 = i3;
    v3 = i4;
    v4 = i5;
    v5 = i1;
    printf("Les valeurs étaient %i, %i, %i, %i, %i et sont devenues %i, %i, %i, %i, %i.\n", i1, i2, i3, i4, i5, v1, v2, v3, v4, v5);
}

//Chapitre 3.4 "Mise en pratrique opérations arithmétiques, cast" :
//Exercice 3 :
void ch3_4_ex3()
{
    int a = 0;
    printf("Entrez un nombre entier :\n");
    scanf("%i", &a);
    float demi = (float)a/2;
    int inverse = a*-1;
    printf("Pour le nombre entier %i l'a moitié est %f et l'inverse est %i \n", a, demi, inverse);
}

//Exercice 4 :
void ch3_4_ex4()
{
    float taux_Euro_Franc = 6.55957;
    float valeur = 0;
    printf("Entrez la somme à convertir :\n");
    scanf("%f", &valeur);
    printf("\n1 pour Euro vers Franc, 2 pour Franc vers Euro\n");
    short type = 0;
    scanf("%hd", &type);
    float valeur2 = 0;
    if (type == 1)
    {
        valeur2 = valeur * taux_Euro_Franc;
        printf("\nVos %f Euro font %f Franc\n", valeur, valeur2);
    }
    else if (type == 2)
    {
        valeur2 = valeur / taux_Euro_Franc;
        printf("\nVos %f Franc font %f Euro\n", valeur, valeur2);
    }
    else
    {
        printf("Erreur sur le sens de conversion, vérifiez votre entrée puis réesayez\n");
    }
}

//Exercice 5 :
void ch3_4_ex5()
{
    float valeur = 0;
    printf("Entrez la Température à convertir :\n");
    scanf("%f", &valeur);
    printf("\n1 pour °C vers °F, 2 pour °F vers °C\n");
    short type = 0;
    scanf("%hd", &type);
    float valeur2 = 0;
    if (type == 1)
    {
        valeur2 = ((9.0*valeur)/5)+32;
        printf("\nVos %f °C font %f °F\n", valeur, valeur2);
    }
    else if (type == 2)
    {
        valeur2 = (5.0/9.0)*(valeur-32.0);
        printf("\nVos %f °F font %f °C\n", valeur, valeur2);
    }
    else
    {
        printf("Erreur sur le sens de conversion, vérifiez votre entrée puis réesayez\n");
    }
}

//Exercice 6 :
void ch3_4_ex6()
{
    int a = 10, b = 50;
    int c = a/b;
    printf("int par int rangé dans un int %d\n", c);
    float f = (float)a/(float)b;
    printf("int par int rangé dans un float %f\n", f);
    float f2= (float)a/f;
    printf("int par un float rangé dans un float %f ou %d\n", f2, f2);
}

//Exercice 7 :
void ch3_4_ex7()
{
    float prix = 0;
    printf("Entrez le prix de l'ordinateur :\n");
    scanf("%f", &prix);
    float prix_redu = prix*0.9;
    printf("Le prix après réduction est %f\n", prix_redu);
}

//Exercice 8 :
void ch3_4_ex8()
{
    printf("Entrez la valeur de x :\n");
    float x = 0;
    scanf("%f", &x);
    float f = ((2*x)+3)*((3*(x*x))+2);
    printf("f(%f)=%f\n", x, f);
}

//Exercice 9 :
void ch3_4_ex9()
{
    int a = 0;
    printf("Entrez votre nombre\n");
    scanf("%i", &a);
    if (a%2 ==0)
    {
        printf("Est pair\n");
    }
    else
    {
        printf("Est impair\n");
    }
}

//Exercice 10 :
void ch3_4_ex10()
{
    int a = 31345;
    int b = a%10;
    a = a-b;
    b = (a%100)/10;
    printf("%i\n", b);
    b = (a%1000)/100;
    printf("%i\n", b);
    b = (a%10000)/1000;
    printf("%i\n", b);
}

//Exercice 11 :
void ch3_4_ex11()
{
    printf("Entrez l'entier à arrondir\n");
    double i = 0;
    scanf("%lf", &i);
    i = i*100.0;
    i = (int)i/100.0;
    printf("%f\n", i);
}

//Exercice 12 :
void ch3_4_ex12()
{
    int i = 0;
    printf("Entrez la valeur de i\n");
    scanf("%i", &i);
    int ipp = i;
    ipp++;
    int ppi = i;
    ++ppi;
    printf("i = %i , i++ = %i , ++i = %i\n", i, ipp, ppi);
}

//Chapitre 3.6 "Mise en pratrique : opérations et nombre aléatoire" :
//Exercice 1 :
void ch3_6_ex1()
{
    srand(time(NULL));
    int result = rand()%2;
    if (result == 0)
    {
        printf("Face perdu !\n");
    }
    else
    {
        printf("Pile gagné !\n");
    }
}

//Exercice 2 :
void ch3_6_ex2()
{
    srand(time(NULL));
    int result = rand()%(12-2)+2;
    printf("Résultat ! %i !\n", result);
}

//Exercice 3 :
void ch3_6_ex3()
{
    printf("Entrez le seuil haut :\n");
    int sh = 0, sb = 0;
    scanf("%i", &sh);
    printf("Entrez le seuil bas :\n");
    scanf("%i", &sb);
    srand(time(NULL));
    int a = rand();
    srand(time(NULL));
    int b = rand()%(367);
    int c = rand()%(sh);
    srand(time(NULL));
    int d = rand()%(7354-678)+678;
    int e = rand()%(sh-sb)+sb;
    srand(time(NULL));
    int f = rand()%2;
    srand(time(NULL));
    float g = rand()%(50);
    srand(time(NULL));
    g = g + ((float)(rand()%(100-1)+1)/100);
    printf("%i\t%i\t%i\t%i\t%i\t%i\t%f\n", a, b, c, d, e, f, g);
}

//Chapitre 4.1 "Mise en pratrique : opérateurs de comparaison et NON" :
//Exercice 1 :
void ch4_1_ex1()
{
    int a, b, c;
    srand(5);
    a=rand()%256;
    b=rand()%256;
    c=rand()%256;

    printf("%d", a < 128);
    printf("%d", b < 128);
    printf("%d", c == 223);
    printf("%d", a < b >= rand()%2 ==1);
    printf("%d", a = b !=c + rand()%50);
    printf("%d", b= a==c);
    printf("%d", c = rand()%10 < rand()%10 >= rand()%10 != rand()%10 ==rand()%10);
}

//Chapitre 4.2 "Mise en pratrique : les sauts conditionnels" :
//Exercice 1 :
void ch4_2_ex1()
{
    int a = 0, b= 0;
    printf("Entrez la valeur de a :\n");
    scanf("%i", &a);
    printf("Entrez la valeur de b :\n");
    scanf("%i", &b);
    if (a<b)
    {
        printf("\n%i est plus grand que %i\n", b, a);
    }
    else if (b<a)
    {
        printf("\n%i est plus grand que %i\n", a, b);
    }
    else
    {
        printf("\nLes deux valeurs sont égales\n");
    }
}

//Exercice 2 :
void ch4_2_ex2()
{
    int a = 0, b= 0;
    printf("Entrez la valeur de a :\n");
    scanf("%i", &a);
    printf("Entrez la valeur de b :\n");
    scanf("%i", &b);
    if (a<b)
    {
        printf("\n%i,%i\n", a, b);
    }
    else if (b<a)
    {
        printf("\n%i,%i\n", b, a);
    }
    else
    {
        printf("\n%i,%i\n", a, b);
    }
}

//Exercice 3 :
void ch4_2_ex3()
{
    printf("Entrer votre nombre Entier :\n");
    int a = 0;
    scanf("%i", &a);
    if ((a%2) ==0)
    {
        printf("Est pair\n");
    }
    else
    {
        printf("Est impair\n");
    }
}

//Exercice 4 :
void ch4_2_ex4()
{
    int a = 0;
    printf("0 pour a = 0, 1 pour a = 100 :\n");
    scanf("%i", &a);
    if (a != 0)
    {
        a = 100;
    }
    
    printf("Séquence 1 : ");
    if (a < 50)
    {
        printf("1");
    }
    if (a < 40)
    {
        printf("2");
    }
    if (a < 30)
    {
        printf("3");
    }
    if (a < 20)
    {
        printf("4");
    }
    if (a < 10)
    {
        printf("5");
    }

    printf("\nSéquence 2 : ");
    if (a < 50)
        printf("1");
    else
        printf("2");
    if (a < 30)
        printf("3");
    else
        printf("4");
    
    printf("\nSéquence 3 : ");
    if (a < 10)
    {
        printf("1");
    }
    else if (a < 20)
    {
        printf("2");
    }
    else if (a < 30)
    {
        printf("3");
    }
    else if (a < 40)
    {
        printf("4");
    }
    else if (a < 50)
    {
        printf("5");
    }
    else
    {
        printf("0");
    }
    printf("\n");
}

//Exercice 5 :
void ch4_2_ex5()
{
    printf("Pile 1, Face 0 :\n");
    int a = 0;
    scanf("%i", &a);
    srand(time(NULL));
    int b = rand()%2;
    printf("%i", b);
    if (b == 0)
    {
        printf("\nFace ! ");
        if (a == b)
        {
            printf("Gagné !\n");
        }
        else
        {
            printf("Perdu !\n");
        }
        
    }
    if (b == 1)
    {
        printf("\nPile ! ");
        if (a == b)
        {
            printf("Gagné !\n");
        }
        else
        {
            printf("Perdu !\n");
        }
        
    }
}

//Exercice 6 :
void ch4_2_ex6()
{
    printf("Le nombre est compris entre 1 et 10, quel est votre estimation ?\n");
    int a = 0;
    scanf("%i", &a);
    srand(time(NULL));
    int b = (rand()%(10-1))+1;
    if (a == b)
    {
        printf("Gagné !\n");
    }
    else if (a < b)
    {
        a = b-a;
        printf("Votre nombre est plus petit de %i\n", a);
    }
    else if (a > b)
    {
        a = a-b;
        printf("Votre nombre est plus grand de %i\n", a);
    }
    else
    {
        printf("Erreur\n");
    }
}

//Exercice 8 :
void ch4_2_ex8()
{
    rewind(stdin);
    char a = '+';
    printf("Premier signe (+ ou -) ?\n");
    scanf(" %c", &a);
    char b = '+';
    printf("Second signe (+ ou -) ?\n");
    scanf(" %c", &b);

    if (a != b)
    {
        printf("\nLa multiplication donne un nombre négatif (-)\n");
    }
    else
    {
        printf("\nLa multiplication donne un nombre positif (+)\n");
    }
}

//Exercice 9 :
void ch4_2_ex9()
{
    int a = 0, b = 0, c = 0;
    printf("Entrez la première valeur :\n");
    scanf("%i", &a);
    printf("Entrez la seconde valeur :\n");
    scanf("%i", &b);
    printf("Entrez la troisième valeur :\n");
    scanf("%i", &c);
    if (a < b)
    {
        if (b < c)
        {
            printf("%i est plus grand que %i et %i\n", c, b, a);
        }
        else
        {
            printf("%i est plus grand que %i et %i\n", b, c, a);
        }
        
    }
    else
    {
        if (a < c)
        {
            printf("%i est plus grand que %i et %i\n", c, a, b);
        }
        else
        {
            printf("%i est plus grand que %i et %i\n", a, c, b);
        }
    }
}

//Exercice 10 :
void ch4_2_ex10()
{
    float prix = 0;
    char type = 'A';
    printf("Quel est le prix du produit ?\n");
    scanf("%f", &prix);
    printf("Quel est le type de produit (A ou B) ?\n)");
    scanf(" %c", &type);
    if (type == 'b')
    {
        type = 'B';
    }
    
    if (type == 'B')
    {
        printf("Le produit a un TVA de 20%% pour un prix final de %f\n", prix*0.20);
    }
    else
    {
        printf("Le produit a un TVA de 5,5%% pour un prix final de %f\n", prix*0.055);
    }
}

// Chapitre 4.3 : "Mise en pratique : l'aiguillage switch"
//Exercice 2 :
void ch4_3_ex2()
{
    srand(time(NULL));
    int a = rand()%2;
    switch (a)
    {
    case 0:
        printf("Bonjour\n");
        break;
    case 1:
        printf("Salut\n");
        break;
    }
}

//Exercice 3 :
void ch4_3_ex3()
{
    printf("Entrez le premier nombre entier :\n");
    int a = 0;
    scanf("%i", &a);
    printf("Entrez le second nombre entier :\n");
    int b = 0;
    scanf("%i", &b);
    printf("Entrez 1 pour savoir si la somme est paire, 2 pour savoir si le produit est paire, 3 pour savoir si la somme est négative, ou 4 pour savoir si la multiplication est négative :\n");
    int c = 0;
    scanf("%i", &c);
    switch (c)
    {
    case 1:
        if ((a+b)%2==0)
        {
            printf("La somme est paire\n");
        }
        else
        {
            printf("La somme est impaire\n");
        }
        break;
    case 2:
        if ((a*b)%2==0)
        {
            printf("Le produit est paire\n");
        }
        else
        {
            printf("Le produit est impaire\n");
        }
        break;
    case 3:
        if ((a+b) < 0)
        {
            printf("La somme est négative\n");
        }
        else
        {
            printf("La somme est positive\n");
        }
        break;
    case 4:
        if ((a*b) < 0)
        {
            printf("Le produit est négative\n");
        }
        else
        {
            printf("Le produit est positive\n");
        }
        break;
    default:
        return 1;
        break;
    }
    return 0;
}

// Chapitre 4.5 : "Mise en pratique : les opérateurs logiques ET, OU"
//Exercice 1 :
