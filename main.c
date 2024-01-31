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
    unsigned char sexe;

    printf("Veuillez entrer votre sexe (H) ou (F) : ");
    scanf("%c", &sexe);

    if (!(sexe == 72 || sexe == 70))
    {
        printf("Votre sexe n'est pas valide.");
        return 0;
    }

    printf("Rentrez votre année de naissance : ");
    scanf("%d", &annee);

    if (!(annee >= 1900 && annee <= 2024))
    {
        printf("Votre age n'est pas valide.");
        return 0;
    }

    age = 2024 - annee;

    if (age < 18 && sexe == 'H')
    {
        printf("Bonjour jeune homme");
    } else if (age < 18)
    {
        printf("Bonjour jeune fille.");
    } else if (sexe == 'H')
    {
        printf("Bonjour Monsieur");
    } else {
        printf("Bonjour Madame");
    }

    return 0;
}

short int checkIfYearIsBisextile(int year) {
    if (year%4 == 0) {
        if (year%100 == 0 && year%400 != 0) {
            return 0;
        }
        return 1;
    } else {
        return 0;
    }
}

int daysPerMonth(int month, int year) {
    switch (month) {
        case 1:
            return 31;
        case 2:
            if (checkIfYearIsBisextile(year) == 1) {
                return 29;
            }
            return 28;
        case 3:
            return 31;
        case 4:
            return 30;
        case 5:
            return 31;
        case 6:
            return 30;
        case 7:
            return 31;
        case 8:
            return 31;
        case 9:
            return 30;
        case 10:
            return 31;
        case 11:
            return 30;
        default:
            return 31;
    }
}

int ex10() {
    int weekday, day, month, year, date;
    short int isBisextile = 0; // L'annee n'est pas bisextile,

    // On demande la date
    printf("Entrer le jour : ");
    scanf("%d", &day);
    printf("Entrer le mois (1 pour janvier, etc) : ");
    scanf("%d", &month);
    printf("Entrer l'annee : ");
    scanf("%d", &year);

    // On vérifie la date
    // On commence par l'année
    if (year < 1900) {
        printf("L'année n'est pas valide.");
        return 0;
    }

    // On vérifie le mois
    if (!(month >= 1 && month <= 12)) {
        scanf("Le mois n'est pas valide");
        return 0;
    }

    // On vérifie si l'année est bisextile
    isBisextile = checkIfYearIsBisextile(year);

    int countDays = 0;
    // On calcul le nombre de jour depuis 1900
    for (int i = 1900; i < year ; ++i) {
        if (checkIfYearIsBisextile(i) == 1) {
            countDays += 366;
        } else {
            countDays += 365;
        }
    }

    // On rajoute les derniers jours jusqu'au mois
    for (int countMonth = 1; countMonth < month; ++countMonth) {
        countDays += daysPerMonth(countMonth, year);
    }
    countDays += day;

    weekday = 7;
    for (int y = 1; y < countDays+1; ++y) {
        if (weekday == 7) {
            weekday = 1;
        } else {
            weekday++;
        }
    }

    switch (weekday) {
        case 1:
            printf("Lundi");
            break;
        case 2:
            printf("Mardi");
            break;
        case 3:
            printf("Mercredi");
            break;
        case 4:
            printf("Jeudi");
            break;
        case 5:
            printf("Vendredi");
            break;
        case 6:
            printf("Samedi");
            break;
        default:
            printf("Dimanche");
            break;
    }
    return 0;
}

int main()
{
    ex10();
    return 0;
}
