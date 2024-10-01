#include <stdio.h>

int ex1() {
    int nb = 0;
    int factorielle = 1;

    printf("Entrez un entier : ");
    scanf("%d", &nb);

    for (int i = 1; i <= nb; ++i) {
        factorielle = factorielle * i;
    }

    printf("La factorielle de %d est : %d", nb, factorielle);
    return 0;

    // Factorielle valide jusqu'à 10^21
}

int ex2() {
    int table;
    printf("Entrez le numéro de la table de multiplication : ");
    scanf("%d", &table);

    for (int nb = 1; nb <= 10; nb++) {
        int result = table * nb;
        printf("%d * %d = %d\n", table, nb, result);
    }

    return 0;
}

int ex3() {
    for (int table = 1; table <= 12; table++) {
        for (int nb = 1; nb <= 10; nb++) {
            int result = table * nb;
            printf("%d * %d = %d\n", table, nb, result);
        }
    }
    return 0;
}

int ex4() {
    float note = 0;

    printf("Entrez la note : ");
    scanf("%f", &note);

    float max = note;
    float min = note;
    float sum = note;
    float average = note;
    float nbNotes = 1;

    while (note != -1) {
        printf("\nEntrez une note : ");
        scanf("%f", &note);

        if (note == -1) {
            break;
        }

        if (note < min) {
            min = note;
        }

        if (note > max) {
            max = note;
        }

        nbNotes++;
        sum += note;

        average = sum / nbNotes;
    }

    printf("La moyenne est %f\nLe min est %f\nLe max est %f", average, min, max);

    return 0;
}

int ex5() {
    int n;

    printf("Entrez n : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n%i == 0) {
            printf("\n%d est un diviseur de %d", i, n);
        }
    }

    return 0;
}

int ex6() {
    int n;

    printf("Entrez n : ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n%i == 0) {
            int nbdiviseur = 2;
            for (int j = 2; j < i-1; ++j) {
                if (i%j == 0) {
                    nbdiviseur += 1;
                    break;
                }
            }
            if (nbdiviseur == 2) {
                printf("\n%d est un diviseur premier de %d", i, n);
            }
        }
    }

    return 0;
}

int ex7() {
    int n, p;

    printf("Entrez n : ");
    scanf("%d", &n);
    printf("Entrez p : ");
    scanf("%d", &p);

    float PGCD, PPCM;
    int a = n, b = p, reste;

    // Application algorithme d'euclide
    while (a%b != 0) {
        reste = a%b;
        a = b;
        b = reste;
    }

    PGCD = a;
    PPCM = (a * b) / PGCD;

    printf("PGCD = %f\nPPCM = %f\n", PGCD, PPCM);
    return 0;
}

int main()
{
    ex4();
    return 0;
}