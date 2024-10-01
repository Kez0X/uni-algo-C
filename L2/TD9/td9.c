#include <stdio.h>  // Pour printf() et fprintf();
#include <stdlib.h> // Pour malloc() et free()
#include <string.h> // Pour strlen()
#include <math.h>   // Pour abs()
#include <time.h>   // Pour time()
#include "td9.h"    // Inclusion du fichier d'en-tête contenant les déclarations de fonctions (pour pouvoir les écrire ici dans n'importe quel ordre)

struct Node {        // Q1 : Structure Node représentant une cellule de liste simplement chaînée
    char key;
    char value[100];
    struct Node * next; 
};

struct HTable {      // Q2 : Structure HT représentant une table de hachage
    int capa;
    struct Node * table;
};

unsigned long hashNaive(char * key, unsigned long nCapa) { // Q3 : Fonction de hachage naïve
    unsigned long value = 0;
    for (int i = 0; i < strlen(key); i++)
    {
        value += key[i];
    }
    value = value%nCapa;
    return value;
}

unsigned long hashBernstein(char * key, unsigned long nCapa) { // Q3 : Fonction de hachage de Bernstein
    
}

unsigned long hash (char * key, unsigned long nCapa) { // Q3 : Fonction de hachage utilisée
}

void newHT(HTable * ht) { // Q4 : Crée la table d'une structure HTable de capacité fixée
}

Node * newNode(char * key, void * data) { // Q5 : Crée un noeud contenant la paire key/data
}

void putHT_v1(HTable * ht, char * key, void * data) { // Q6 : Insertion en fin de liste sans vérification d'existence
}

unsigned int randInt(unsigned int nMin, unsigned int nMax) { // Q7 : Retourne un entier aléatoire entre nMin inclus et nMax exclu
}

char * randStrings(unsigned long n, unsigned int nMinLen, unsigned int nMaxLen, char nMinChar, char nMaxChar) { // Q8 : Crée un tableau de n chaînes de caractères aléatoires, de longueurs comprises entre nMinLen et nMaxLen, et composées de caractères tirés aléatoirement entre nMinChar et nMaxChar
}

void statHT(HTable * ht) { // Q10 : Calcule et affiche les statistiques sur la table
}

void * getHT(HTable * ht, char * key) { // Q11 : Recherche une paire clé/valeur dans la table
}

void putHT(HTable * ht, char * key, void * data) { // Q12 : Version améliorée : ajoute une paire clé/valeur dans la table, ou modifie la valeur si la clé existe déjà dans la table
}

int delHT(HTable * ht, char * key) { // Q13 : Supprime une paire clé/valeur de la table
}

unsigned long freeHT(HTable * ht) { // Q14 : Détruit la table
}

int main(int argc, char ** argv) { // Q9 : Fonction main, utilisée pour tester le code écrit
    unsigned long nSz1 = 1300000;                              // Une table de hachage fonctionne mieux lorsque son facteur de charge n'est pas trop élevé (de l'ordre de 0.75)
    unsigned long nElt = 1000000;                              // Nombre de clés à insérer dans la table
    unsigned int nMin = 5;                                     // Longueur minimale des clés
    unsigned int nMax = 30;                                    // Longueur maximale des clés
    unsigned int cMin = 33;                                    // Code ASCII du premier caractère autorisé pour constituer les clés
    unsigned int cMax = 126;                                   // Code ASCII du dernier caractère autorisé pour constituer les clés
    char val[5] = "true";                                      // Valeur commune associée à toutes les clés
    srand((unsigned int)time(NULL));                           // Non demandé : initialise le générateur aléatoire avec la date système courante (timestamp)
    
    // ...
    
    return 0;
}
