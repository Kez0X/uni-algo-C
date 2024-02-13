//
// Created by valentinmary on 13/02/24.
//

#include <stdio.h>
#include <stdlib.h>

float saisieNote(float min, float max) {
    float note = 0;
    do {
        if (note < min || note > max) {
            printf("Note non valide\n");
        }
        printf("Entrez une note entre %f et %f : ", min, max);
        scanf("%f", &note);
    } while (note < min || note > max);
    return note;
}

void saisiesNotes(float tNotes[], int n, float min, float max) {
    for (int i = 0; i < n; ++i) {
        tNotes[i] = saisieNote(min, max);
    }
}

float calculeMoy(const float tNotes[], int n) {
    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += tNotes[i];
    }
    float nfloat = (float) n;
    float moyenne = sum/nfloat;
    return moyenne;
}

float calculeMin(const float tNotes[], int n) {
    float min = tNotes[0];
    for (int i = 0; i < n; ++i) {
        float note = tNotes[i];
        if (note < min) {
            min = note;
        }
    }
    return min;
}

float calculeMax(const float tNotes[], int n) {
    float max = tNotes[0];
    for (int i = 0; i < n; ++i) {
        float note = tNotes[i];
        if (note > max) {
            max = note;
        }
    }
    return max;
}

void affiche(const float t[], int n) {
    printf("--TABLEAU--\n");
    for (int i = 0; i < n; ++i) {
        printf("%d : %f\n", i, t[i]);
    }
    printf("-----------\n");
}

void inverse(float t[], int n) {
    // On crée une copie
    float tCopie[n];
    for (int i = 0; i < n; ++i) {
        tCopie[i] = t[i];
    }
    // On remplace les valeurs dans l'autre sens dans t
    int y = n-1;
    for (int i = 0; i < n; ++i) {
        t[y] = tCopie[i];
        y--;
    }
}

void melange(float t[], int n) {
    for (int i = 0; i < n; ++i) {
        int alea = rand() % 5;

    }
}

int main()
{
    int nNotes;
    printf("Entrez le nombre de notes : ");
    scanf("%d", &nNotes);

    float tNotes[nNotes];
    float min = 0;
    float max = 20;

    saisiesNotes(tNotes, nNotes, min, max);
    float moyenne = calculeMoy(tNotes, nNotes);
    float tmin = calculeMin(tNotes, nNotes);
    float tmax = calculeMax(tNotes, nNotes);

    printf("La moyenne des notes est %f\nLa note minimale est %f\nLa note maximale est %f\n", moyenne, tmin, tmax);

    affiche(tNotes, nNotes);
    inverse(tNotes, nNotes);
    affiche(tNotes, nNotes);

    melange(tNotes, nNotes);
    affiche(tNotes, nNotes);

    return 0;
}