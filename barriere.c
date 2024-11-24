#include <stdio.h>
#include <stdlib.h>
#include "barriere.h"

// Prototypes
int placer_barriere(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx1, int yy1, int xx2, int yy2, int *barrieres_restantes);
int verifier_blocage(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU]);

int main() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int barrieres_restantes = MAX_BARRIERES;
    int xx1, yy1, xx2, yy2;

    printf("Barrières restantes : %d\n", barrieres_restantes);

    while (barrieres_restantes > 0) {
        printf("\nEntrez les coordonnées des deux cases adjacentes pour placer une barrière (format : x1 y1 x2 y2) : ");
        scanf("%d %d %d %d", &xx1, &yy1, &xx2, &yy2);

        if (placer_barriere(plateau, xx1, yy1, xx2, yy2, &barrieres_restantes)) {
            printf("Barrière placée avec succès !\n");
        } else {
            printf("Placement invalide. Essayez encore.\n");
        }

        printf("Barrières restantes : %d\n", barrieres_restantes);
    }

    printf("Toutes les barrières ont été utilisées.\n");
    return 0;
}

// Fonction pour placer une barrière
int placer_barriere(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx1, int yy1, int xx2, int yy2, int *barrieres_restantes) {
    // Vérification des coordonnées (limites du plateau)
    if (xx1 < 0 || xx1 >= TAILLE_PLATEAU || yy1 < 0 || yy1 >= TAILLE_PLATEAU ||
        xx2 < 0 || xx2 >= TAILLE_PLATEAU || yy2 < 0 || yy2 >= TAILLE_PLATEAU) {
        printf("Les coordonnées sont en dehors du plateau.\n");
        return 0; // Échec
    }

    // Vérification que les cases sont adjacentes
    if (!((xx1 == xx2 && abs(yy1 - yy2) == 1) || (yy1 == yy2 && abs(xx1 - xx2) == 1))) {
        printf("Les cases ne sont pas adjacentes.\n");
        return 0; // Échec
    }

    // Vérification qu'il n'y a pas déjà une barrière
    if (plateau[xx1][yy1] == 1 || plateau[xx2][yy2] == 1) {
        printf("Il y a déjà une barrière à cet endroit.\n");
        return 0; // Échec
    }

    // Placement définitif de la barrière
    plateau[xx1][yy1] = 1;
    plateau[xx2][yy2] = 1;
    (*barrieres_restantes)--;
    return 1; // Succès
}


