#include "Score.h"
#include <stdio.h>

void calculerScore(Joueur *joueur, int pointsGagnes) {
    joueur->score += pointsGagnes;
    printf("Score mis à jour pour %s : %d points\n", joueur->pseudo, joueur->score);
}

void sauvegarderScoreDansFichier(FILE *file, Joueur *joueurs, int nombreJoueurs) {
    for (int i = 0; i < nombreJoueurs; i++) {
        fprintf(file, "Pseudo : %s, Score : %d\n", joueurs[i].pseudo, joueurs[i].score);
    }
}
