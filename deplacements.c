#include <stdio.h>
#include "affichage.h"
#include "hasard.h"
#include "sousMenu.h"
#include "joueurs.h"
#include "barriere.h"
#include "deplacements.h"
#include <stdlib.h>

int deplacement1() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int x1 = X1;
    int y1 = Y1;
    int direction;

    // Exemple de barrière (1 indique une barrière)
    //plateau[3][4] = 1; // Barrière entre (4,4) et (3,4)

    printf("Position initiale : (%d, %d)\n", x1, y1);

    while (1) {
        printf("\nEntrez une direction (1 = Haut, 2 = Bas, 3 = Gauche, 4 = Droite, 5 = Quitter) : ");
        scanf(" %d", &direction);

        if (direction == 5) {
            printf("Fin du deplacement.\n");
            break;
        }

        if (deplacerPion1(plateau, &x1, &y1, direction)) {
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
int deplacerPion1(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x1, int *y1, int direction) {
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


int deplacement2() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int x2 = X2;
    int y2 = Y2;
    int direction;

    // Exemple de barrière (1 indique une barrière)
    //plateau[3][4] = 1; // Barrière entre (4,4) et (3,4)

    printf("Position initiale : (%d, %d)\n", x2, y2);

    while (1) {
        printf("\nEntrez une direction (1 = Haut, 2 = Bas, 3 = Gauche, 4 = Droite, 5 = Quitter) : ");
        scanf(" %d", &direction);

        if (direction == 5) {
            printf("Fin du deplacement.\n");
            break;
        }

        if (deplacerPion2(plateau, &x2, &y2, direction)) {
            printf("Deplacement reussi. Nouvelle position : (%d, %d)\n", x2, y2);
                break;
        }
            printf("Deplacement invalide. Essayez une autre direction.\n");
    }
    char tabInitial[L][C];
    initialisationPlateau(tabInitial);
    tabInitial[Y1][X1]=pion1;
    tabInitial[y2][x2]=pion2;
    afficherPlateau(tabInitial);
    return 0;
}

// Fonction pour déplacer un pion
int deplacerPion2(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x2, int *y2, int direction) {
    int nouvelle_x = *x2;
    int nouvelle_y = *y2;

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
    *x2 = nouvelle_x;
    *y2 = nouvelle_y;
    return 1; // Déplacement réussi
}


int deplacement3() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int x3 = X3;
    int y3 = Y3;
    int direction;

    // Exemple de barrière (1 indique une barrière)
    //plateau[3][4] = 1; // Barrière entre (4,4) et (3,4)

    printf("Position initiale : (%d, %d)\n", x3, y3);

    while (1) {
        printf("\nEntrez une direction (1 = Haut, 2 = Bas, 3 = Gauche, 4 = Droite, 5 = Quitter) : ");
        scanf(" %d", &direction);

        if (direction == 5) {
            printf("Fin du deplacement.\n");
            break;
        }

        if (deplacerPion3(plateau, &x3, &y3, direction)) {
            printf("Deplacement reussi. Nouvelle position : (%d, %d)\n", x3, y3);
                break;
        }
            printf("Deplacement invalide. Essayez une autre direction.\n");
    }
    char tabInitial[L][C];
    initialisationPlateau(tabInitial);
    tabInitial[Y1][X1]=pion1;
    tabInitial[Y2][X2]=pion2;
    tabInitial[y3][x3]=pion3;
    tabInitial[Y4][X4]=pion4;
    afficherPlateau(tabInitial);
    return 0;
}

// Fonction pour déplacer un pion
int deplacerPion3(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x3, int *y3, int direction) {
    int nouvelle_x = *x3;
    int nouvelle_y = *y3;

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
    *x3 = nouvelle_x;
    *y3 = nouvelle_y;
    return 1; // Déplacement réussi
}


int deplacement4() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int x4 = X4;
    int y4 = Y4;
    int direction;

    // Exemple de barrière (1 indique une barrière)
    //plateau[3][4] = 1; // Barrière entre (4,4) et (3,4)

    printf("Position initiale : (%d, %d)\n", x4, y4);

    while (1) {
        printf("\nEntrez une direction (1 = Haut, 2 = Bas, 3 = Gauche, 4 = Droite, 5 = Quitter) : ");
        scanf(" %d", &direction);

        if (direction == 5) {
            printf("Fin du deplacement.\n");
            break;
        }

        if (deplacerPion4(plateau, &x4, &y4, direction)) {
            printf("Deplacement reussi. Nouvelle position : (%d, %d)\n", x4, y4);
                break;
        }
            printf("Deplacement invalide. Essayez une autre direction.\n");
    }
    char tabInitial[L][C];
    initialisationPlateau(tabInitial);
    tabInitial[Y1][X1]=pion1;
    tabInitial[Y2][X2]=pion2;
    tabInitial[Y3][X3]=pion3;
    tabInitial[y4][x4]=pion4;
    afficherPlateau(tabInitial);
    return 0;
}

// Fonction pour déplacer un pion
int deplacerPion4(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int *x4, int *y4, int direction) {
    int nouvelle_x = *x4;
    int nouvelle_y = *y4;

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
    *x4 = nouvelle_x;
    *y4 = nouvelle_y;
    return 1; // Déplacement réussi
}
