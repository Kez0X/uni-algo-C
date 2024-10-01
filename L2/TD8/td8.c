#include <stdio.h>      // Pour printf() et scanf()
#include <stdlib.h>     // Pour malloc() et free()
#include <time.h>       // Pour initialiser le générateur aléatoire
//#include <SDL2/SDL.h>   // Inclusion de la bibliothèque SDL (pour Q7)
#include "td8.h"        // Inclusion du fichier d'en-tête contenant les déclarations de fonctions (pour pouvoir les écrire ici dans n'importe quel ordre)

#define N_SOMMETS 10    // Nombre de sommets du graphe de la figure
#define N_ARETES  20    // Nombre d'arêtes du graphe de la figure
#define LG_GRILLE 100   // Largeur de la grille (pour Q6)
#define HT_GRILLE 100   // Hauteur de la grille (pour Q6)
#define LG_FEN    800   // Largeur de la fenêtre (pour Q7)
#define HT_FEN    800   // Hauteur de la fenêtre (pour Q7)

char * aVille[N_SOMMETS] = {"Los-Angeles", "Atlanta", "Londres", "Paris", "Francfort", "Dubai", "Pékin", "Hong-Kong", "Tokyo", "Sydney"}; // Tableau des sommets (fourni)
int aArete[N_ARETES][3] = {{0, 1, 3133}, {0, 2, 8780}, {0, 6, 10059}, {1, 2, 6776}, {1, 3, 7072}, {1, 5, 12230}, {2, 3, 348}, {2, 4, 655}, {2, 6, 8175}, {3, 4, 448}, {3, 5, 5245}, {4, 6, 7810}, {4, 7, 9171}, {5, 7, 5929}, {5, 9, 12039}, {6, 7, 1987}, {6, 8, 2097}, {7, 8, 2904}, {7, 9, 7372}, {8, 9, 7785}}; // Tableau des arêtes (fourni)

int main(int argc, char ** argv) {
    return 0;
}

void ajoutAreteOr(int n1, int n2, int nP) { // Q2 : Ajoute une arête orientée au graphe
    malloc(sizeof(aArete[N_ARETES+1][3]));

    aArete[N_ARETES+1][3] = {n1, n2, nP};
}

void ajoutAreteNOr(int n1, int n2, int nP) { // Q2 : Ajoute une arête non orientée (c-à-d 2 arêtes orientées) au graphe

}

void creaGraphe() { // Q3 : Crée le graphe de la figure
}

void dijkstra(int nDeb, int nFin, int * aChem) { // Q4 : Calcule le plus court chemin de nDeb à nFin (Dijkstra 1959)
}

void supprGraphe() { // Q5 : Détruit le graphe (libération de la mémoire)
}

void creaGrille(int * aGrille, int nLg, int nHt, int nPctMur) { // Q6 : Crée la grille et son graphe associé
}

int dessinGrille(int * aGrille, int nLg, int nHt) { // Q7 : Dessine la grille et le plus court chemin trouvé
}
