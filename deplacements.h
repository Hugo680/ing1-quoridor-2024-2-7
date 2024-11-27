#ifndef DEPLACEMENTS_H
#define DEPLACEMENTS_H
#define TAILLE_PLATEAU 18

int deplacement1();
int deplacerPion1(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x1, int *y1, int direction);

int deplacement2();
int deplacerPion2(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x2, int *y2, int direction);

int deplacement3();
int deplacerPion3(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x3, int *y3, int direction);

int deplacement4();
int deplacerPion4(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x4, int *y4, int direction);

#endif //DEPLACEMENTS_H

