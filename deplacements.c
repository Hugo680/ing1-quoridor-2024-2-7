#include <stdio.h>
#include "affichage.h"
#include "hasard.h"
#include "sousMenu.h"
#include "joueurs.h"
#include "barriere.h"
#include "deplacements.h"
#include <stdlib.h>

int deplacement() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int x1 = X1;
    int y1 = Y1;
    int direction;

    // Exemple de barrière (1 indique une barrière)
    //plateau[3][4] = 1; // Barrière entre (4,4) et (3,4)

    printf("Position initiale : (%d, %d)\n", x1, 1);

    while (1) {
        printf("\nEntrez une direction (1 = Haut, 2 = Bas, 3 = Gauche, 4 = Droite, 5 = Quitter) : ");
        scanf(" %d", &direction);

        if (direction == 5) {
            printf("Fin du deplacement.\n");
            break;
        }

        if (deplacerPion(plateau, &x1, &y1, direction)) {
            printf("Deplacement reussi. Nouvelle position : (%d, %d)\n", x1, y1);
                break;
        }
            printf("Deplacement invalide. Essayez une autre direction.\n");
    }
    char tabInitial[L][C];
    initialisationPlateau(tabInitial);
    tabInitial[y1][x1]=pion1;
    tabInitial[Y2][X2]=pion2;
    afficherPlateau(tabInitial);
    return 0;
}

// Fonction pour déplacer un pion
int deplacerPion(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x1, int *y1, int direction) {
    int nouvelle_x = *x1;
    int nouvelle_y = *y1;

    // Calcul de la nouvelle position selon la direction
    switch (direction) {
        case 1 : // Haut
            nouvelle_x = -3;
            break;
        case 2 : // Bas
            nouvelle_x = +3;
            break;
        case 3 : // Gauche
            nouvelle_y --;
            nouvelle_y --;
            break;
        case 4 :  // Droite
            nouvelle_y++;
            nouvelle_y++;
            break;
        default:
            printf("Direction invalide !\n");
            return 0; // Déplacement invalide
    }

    // Vérification des limites du plateau
    if (nouvelle_x < 1 || nouvelle_x >= TAILLE_PLATEAU || nouvelle_y < 1 || nouvelle_y >= TAILLE_PLATEAU) {
        printf("Vous sortez du plateau !\n");
        return 0; // Déplacement invalide
    }

    // Vérification des barrières (1 dans la matrice indique une barrière)
    if (plateau[nouvelle_x][nouvelle_y] == 1) {
        printf("Un obstacle bloque le chemin !\n");
        return 0; // Déplacement invalide
    }

    // Mise à jour de la position
    *x1 = nouvelle_x;
    *y1 = nouvelle_y;
    return 1; // Déplacement réussi
}
