#include <stdio.h>
#include <stdlib.h>

void ex1()
{
    int a, b;
    printf("Saisir a : ");
    scanf("%d", &a);
    printf("Saisir b : ");
    scanf("%d", &b);
    printf("Produit égal à %d \n", (a * b));
}

void ex2()
{
    int a, b, quotient, reste;
    printf("Saisir a : ");
    scanf("%d", &a);
    printf("Saisir b : ");
    scanf("%d", &b);
    quotient = a / b;
    reste = a % b;
    printf("Quotient égal à %d, Reste égal à %d \n", quotient, reste);
}

void ex3()
{
    // On initialise les variables
    unsigned char c;

    // On demande la saisie de c
    printf("Saisir le caractère c : ");
    scanf("%c", &c);

    // Affichage de son code décimal, hexadécimal et octal
    printf("Décimal : %d \nHexadécimal : %x \nOctal : %o \n", c, c, c);
}

void ex4()
{
    int a, b, x;
    printf("Entrez a : ");
    scanf("%d", &a);
    printf("Entrez b : ");
    scanf("%d", &b);
    printf("a = %d | b = %d\n", a, b);
    x = a;
    a = b;
    b = x;
    printf("Inversion\na = %d | b = %d\n", a, b);
}

void ex5()
{
    float a, b;
    printf("Entrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    if (b == 0.0)
    {
        printf("Division impossible par 0\n");
    }
    else
    {
        printf("Divison égal à %.3f\n", (a / b));
    }
}

void ex6()
{
    int a, b;
    printf("Entrez a : ");
    scanf("%d", &a);
    printf("Entrez b : ");
    scanf("%d", &b);

    if (a >= b)
    {
        printf("a est plus grand : %d\n", a);
    }
    else
    {
        printf("b est plus grand : %d\n", b);
    }
}

void ex7()
{
    int n1, n2;
    printf("Entrez la note 1 : ");
    scanf("%d", &n1);
    printf("Entrez la note 2 : ");
    scanf("%d", &n2);

    if (n1 >= 0 && n1 <= 20 && n2 >= 0 && n2 <= 20)
    {
        float moyenne = (n1 + n2) / 2;
        printf("La moyenne est égale %f\n", moyenne);
    }
    else
    {
        printf("Les notes ne sont pas comprises entre 1 et 20.\n");
    }
}

void ex8()
{
    int a;
    printf("Entrez le nombre : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d est pair.\n", a);
    }
    else
    {
        printf("%d est impair.\n", a);
    }

    if (a % 3 == 0)
    {
        printf("%d est multiple de 3.\n", a);
    }

    if (a % 5 == 0)
    {
        printf("%d est multiple de 5.\n", a);
    }
}

int ex9() {
    int annee, age;
    char sexe;
    char H = "H";
    char F = "F";

    printf("Rentrez votre année de naissance : ");
    scanf("%d", &annee);

    if (annee >= 1900 && annee <= 2024)
    {
        printf("Votre age n'est pas valide.");
        return 0;
    }

    printf("Veuillez entrer votre sexe (H) ou (F)");
    scanf("%c", &sexe);

    if (sexe != H || sexe != F)
    {
        printf("Votre sexe n'est pas valide.");
        return 0;
    }

    age = 2024 - annee;

    if (age < 18 && sexe == "H")
    {
        printf("Bonjour jeune homme");
    } else if (age < 18 && sexe == "F")
    {
        printf("Bonjour jeune fille.");
    } else if (sexe == "H")
    {
        printf("Bonjour Monsieur");
    } else {
        printf("Bonjour Madame");
    }
    
    return 0;    
}

int main()
{
    ex9();
    return 0;
}