#ifndef BARRIERE_H
#define BARRIERE_H
#define TAILLE_PLATEAU 18
#define MAX_BARRIERES 10
#define barriere_V 186
#define barriere_H 135
#include "affichage.h"

int barrieres1();
int placer_barriere1(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx, int yy, int *barrieres_restantes);

int barrieres2();
int placer_barriere2(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx2, int yy2, int *barrieres_restantes);

int barrieres3();
int placer_barriere3(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx3, int yy3, int *barrieres_restantes);

int barrieres4();
int placer_barriere4(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx4, int yy4, int *barrieres_restantes);


#endif//BARRIERE_H
