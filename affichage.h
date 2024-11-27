#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#define L 18
#define C 18

#define X1 1
#define X2 17
#define X3 9
#define X4 9
#define Y1 9
#define Y2 9
#define Y3 1
#define Y4 17

#define barriereH 196
#define barriereV 179
#define pion1 1
#define pion2 2
#define pion3 3
#define pion4 4

void initialisationPlateau(char tabInitial[L][C]);
void afficherPlateau(char tabPlateau[L][C]);
void afficherInfosJoueur();
int scoreFichier();
void menuJoueurs1();
void menuJoueurs2();
void menuJoueurs3();
void menuJoueurs4();
void quitterJeu();
void placerBarriere();





#endif //AFFICHAGE_H
