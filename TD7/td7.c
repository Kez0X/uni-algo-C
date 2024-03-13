#include <stdio.h>  // Pour printf() et scanf()
#include <string.h> // Pour strcmp()
#include <stdlib.h> // Pour malloc() et free()
#include <math.h>   // Pour fmin() et fmax()
#include <time.h>   // Pour initialiser le générateur aléatoire
#include "td7.h"    // Inclusion du fichier d'en-tête contenant les déclarations de fonctions (pour pouvoir les écrire ici dans n'importe quel ordre)

struct Noeud {          // Q1 : Structure Noeud
};

int main(int argc, char ** argv) {
    return 0;
}

int taille(struct Noeud * n) { // Q2 : Compte le nombre de noeuds de l'arbre de racine n
}

int hauteur(struct Noeud * n) { // Q3 : Compte le nombre de niveaux de l'arbre de racine n
}

char * minCh(char * c1, char * c2) { // Q4 : Minimum de 2 chaînes avec prise en compte de NULL
}

char * minimum(struct Noeud * n) { // Q4 : Recherche la valeur minimale de l'arbre
}

char * maxCh(char * c1, char * c2) { // Q5 : Maximum de 2 chaînes avec prise en compte de NULL
}

char * maximum(struct Noeud * n) { // Q5 : Recherche la valeur maximale de l'arbre
}

struct Noeud * insertion(struct Noeud * n, char * ch) { // Q6 : Insertion aléatoire de la chaîne ch dans l'arbre de racine n ; retourne la racine de l'arbre après insertion
}

struct Noeud * insertionEq(struct Noeud * n, char * ch) { // Q6 : Insertion équilibrée de la chaîne ch dans l'arbre de racine n ; retourne la racine de l'arbre après insertion
}

void parcoursPre(struct Noeud * n) { // Q7 : Parcours préfixe
}

void parcoursInf(struct Noeud * n) { // Q8 : Parcours infixe
}

void parcoursSuf(struct Noeud * n) { // Q9 : Parcours suffixe
}

struct Noeud * recherche(struct Noeud * n, char * ch) { // Q10 : Recherche d'une chaîne dans l'arbre de racine n, retourne le premier noeud rencontré contenant ch, ou NULL si ch n'est pas dans l'arbre
}

struct Noeud * recherche2(struct Noeud * n, char * ch) { // Q11 : Recherche pour la suppression : même principe que recherche(), mais retourne le parent du noeud trouvé au lieu du noeud lui-même
}

void supprComplet(struct Noeud * n) { // Q11 : Suppression d'un noeud complet (c-à-d à 2 enfants) : on remplace le contenu du noeud par la valeur de la première feuille rencontrée, puis on supprime cette feuille
}

struct Noeud * suppression(struct Noeud * n, char * ch) { // Q11 : Suppression du premier noeud rencontré portant la chaîne ch dans l'arbre de racine n ; retourne la racine de l'arbre après suppression
}
