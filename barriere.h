#ifndef BARRIERE_H
#define BARRIERE_H
#define TAILLE_PLATEAU 18
#define MAX_BARRIERES 10
#define barriere_V 186
#define barriere_H 205
#include "affichage.h"

int barrieres();
int placer_barriere(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx1, int yy1, int xx2, int yy2, int *barrieres_restantes, char tabInitial[L][C],int barrieres);



#endif//BARRIERE_H
