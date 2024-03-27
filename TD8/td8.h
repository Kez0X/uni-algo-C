#ifndef TD8_H
#define TD8_H

void ajoutAreteOr(int n1, int n2, int nP);
void ajoutAreteNOr(int n1, int n2, int nP);
void creaGraphe();
void dijkstra(int nDeb, int nFin, int * aChem);
void supprGraphe();
void creaGrille(int * aGrille, int nLg, int nHt, int nPctMur);
int  dessinGrille(int * aGrille, int nLg, int nHt);

#endif
