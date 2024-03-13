#ifndef TD7_H
#define TD7_H

struct Noeud;

int taille(struct Noeud * n);
int hauteur(struct Noeud * n);
char * minCh(char * c1, char * c2);
char * minimum(struct Noeud * n);
char * maxCh(char * c1, char * c2);
char * maximum(struct Noeud * n);
struct Noeud * insertion(struct Noeud * n, char * ch);
struct Noeud * insertionEq(struct Noeud * n, char * ch);
void parcoursPre(struct Noeud * n);
void parcoursInf(struct Noeud * n);
void parcoursSuf(struct Noeud * n);
struct Noeud * recherche(struct Noeud * n, char * ch);
struct Noeud * recherche2(struct Noeud * n, char * ch);
void supprComplet(struct Noeud * n);
struct Noeud * suppression(struct Noeud * n, char * ch);

#endif