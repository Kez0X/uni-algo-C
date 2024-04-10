#ifndef TD9_H
#define TD9_H

struct Node;
typedef struct Node Node;

struct HTable;
typedef struct HTable HTable;

unsigned long hashNaive(char * key, unsigned long size);
unsigned long hashBernstein(char * key, unsigned long size);
unsigned long hash(char * key, unsigned long size);
void newHT(HTable * ht);
Node * newNode(char * key, void * val);
void putHT(HTable * ht, char * key, void * val);
unsigned int randInt(unsigned int min, unsigned int max);
char * randStrings(unsigned long n, unsigned int nMinLen, unsigned int nMaxLen, char nMinChar, char nMaxChar);
void statHT(HTable * ht);
void * getHT(HTable * ht, char * key);
int delHT(HTable * ht, char * key);
unsigned long freeHT(HTable *ht);

#endif
