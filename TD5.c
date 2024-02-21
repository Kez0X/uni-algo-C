#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Noeud {
	char valeur[100];
	struct Noeud * suivant;
};

struct Liste {
    struct Noeud * debut;
};

int taille(struct Liste * liste) {
    int nb_noeud = 0;
    struct Noeud * node = liste->debut;
    while (node != NULL)
    {
        nb_noeud++;
        node = node->suivant;
    } 
    return nb_noeud;
};

void affiche(struct Liste * liste) {
    struct Noeud * node = liste->debut;
    while (node != NULL)
    {
        printf("%c", node->valeur);
        node = node->suivant;
    } 
}

int recherche(struct Liste * liste, char * ch[100]) {
    int indexNoeud = -1;
    struct Noeud * node = liste->debut;
    while (node != NULL)
    {
        indexNoeud++;
        if (node->valeur == &ch)
        {
            break;
        }
        node = node->suivant;
    }
    return indexNoeud;
}

int insertionDebut(struct Liste * liste, char * ch[100]) {
    if (liste->debut == NULL)
    {
        return -1;
    }
    
    struct Noeud * nouveauNode;
    nouveauNode->suivant = liste->debut;
    liste->debut = nouveauNode;

    return 0;
}

char suppressionDebut(struct Liste * liste) {
    if (liste->debut == NULL)
    {
        return NULL;
    }

    struct Noeud * nouveauDébut = liste->debut->suivant;
    struct Noeud * ancienDébut = liste->debut; 
    liste->debut = nouveauDébut;

    return ancienDébut->valeur;
}

int suppression(struct Liste * liste, char * ch[100]) {
    if (liste->debut == NULL) {return -1;}

    int indexNoeud = -1;
    struct Noeud * node = liste->debut;
    struct Noeud * previousNode = NULL;
    while (node != NULL)
    {
        if (node->valeur == &ch)
        {
            previousNode->suivant = node->suivant;
            indexNoeud = 0;
            break;
        }
        previousNode = node;
        node = node->suivant;
    }
    
    return indexNoeud;
}

int insertionFin(struct Liste * liste, char * ch[100]) {
    /* struct Noeud * nouveauNoeud {
        valeur: ch,
        suivant: NULL
    }; */



    //if (liste->debut == NULL) {liste};
} 