#include <stdio.h>  // Pour printf() et fprintf();
#include <stdlib.h> // Pour malloc(), realloc() et free()
#include <string.h> // Pour memcpy() et memmove()
#include "td10.h"    // Inclusion du fichier d'en-tête contenant les déclarations de fonctions (pour pouvoir les écrire ici dans n'importe quel ordre)

typedef struct Rarray { // Q1 : Structure de tableau redimensionnable (resizable array)
    * data[0];
    unsigned int eltSize;
    unsigned long length; 
} rarray;

int main(int argc, char ** argv) { // Fonction main utilisée ici pour tester le code écrit
}

rarray * newRA(unsigned int eltSize, unsigned long capa) { // Q2 : Crée et initialise une structure de tableau redimensionnable
    rarray Array = {NULL, eltSize, capa};
    return Array;
}

int resizeRA(rarray * r, unsigned long capa) { // Q3 : Redimensionne (agrandit ou rétrécit) le tableau
}

int pushRA(rarray * r, void * o) { // Q4 : Ajoute un élément en fin de tableau
}

void * popRA(rarray * r) { // Q5 : Retire l'élément en fin de tableau et retourne un pointeur sur cet élément
}

void * getRA(rarray * r, unsigned long i) { // Q6 : Retourne un pointeur sur l'élément à la position i du tableau
}

void printRA(rarray * r) { // Q7 : Affiche le contenu du tableau
}

int insertRA(rarray * r, void * o, unsigned long i) { // Q8 : Insère un élément à la position i du tableau
}

int removeRA(rarray * r, unsigned long i) { // Q9 : Retire l'élément situé à la position i du tableau
}
