#ifndef SCORES_H
#define SCORES_H

#include <stdio.h>

typedef struct {
    char pseudo[50];
    int score;
} Joueur;

// Prototypes de fonctions
void calculerScore(Joueur *joueur, int pointsGagnes);
void sauvegarderScoreDansFichier(FILE *file, Joueur *joueurs, int nombreJoueurs);

#endif // SCORES_H
