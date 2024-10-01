#ifndef TD10_H
#define TD10_H

struct Rarray;
typedef struct Rarray rarray;

rarray * newRA(unsigned int eltSize, unsigned long capa);
int pushRA(rarray * r, void * d);
void * popRA(rarray * r);
void * getRA(rarray * r, unsigned long i);
int insertRA(rarray * r, void * d, unsigned long i);
int removeRA(rarray * r, unsigned long i);
int resizeRA(rarray * r, unsigned long capa);
void printRA(rarray * r);

#endif
