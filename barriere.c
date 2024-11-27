#include <stdio.h>
#include "affichage.h"
#include "hasard.h"
#include "sousMenu.h"
#include "joueurs.h"
#include "barriere.h"
#include "deplacements.h"
#include <stdlib.h>


int barrieres1() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int barrieres_restantes = MAX_BARRIERES;
    int xx, yy;

    printf("Barrieres restantes : %d\n", barrieres_restantes);

    while (barrieres_restantes > 0) {
        printf("\nEntrez les coordonnees d'une case pour placer une barriere (format : x y) : ");
        scanf("%d %d", &xx, &yy);

        placer_barriere1(plateau,xx,yy,&barrieres_restantes);

        printf("Barrieres restantes : %d\n", barrieres_restantes);
    }

    printf("Toutes les barrieres ont été utilisees.\n");
    return 0;
}

// Fonction pour placer une barrière
int placer_barriere1(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx, int yy, int *barrieres_restantes) {
    // Vérification des coordonnées (limites du plateau)
    int choix3;
    if (xx < 0 || xx >= TAILLE_PLATEAU || yy < 0 || yy >= TAILLE_PLATEAU) {
        printf("Les coordonnees sont en dehors du plateau.\n");
        return 0; // Échec
    }

    // Vérification qu'il n'y a pas déjà une barrière
    if (plateau[xx][yy] == 1) {
        printf("Il y a déjà une barriere à cet endroit.\n");
        return 0; // Échec
    }

    printf("Vous avez 2 options :\n");
    printf("1. Placez une barriere verticale\n");
    printf("2. Placez une barriere horizontale\n");
    scanf("%d",&choix3);
    char tabInitial[L][C];
    switch(choix3) {
        case 1 :
            // Placement définitif de la barrière
            plateau[xx][yy] = 1;
            plateau[xx][yy]= barriere_V;
            (*barrieres_restantes)--;
            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy][xx]= barriere_V;
            afficherPlateau(tabInitial);
            break;
        case 2 :
            // Placement définitif de la barrière
            plateau[xx][yy] = 1;
            (*barrieres_restantes)--;

            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy][xx]= barriere_H;
            afficherPlateau(tabInitial);
            break;
        default :
            printf("Erreur dans la pose de la barrière");
    }
    return 0;
}

int barrieres2() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int barrieres_restantes = MAX_BARRIERES;
    int xx2, yy2;

    printf("Barrieres restantes : %d\n", barrieres_restantes);

    while (barrieres_restantes > 0) {
        printf("\nEntrez les coordonnees d'une case pour placer une barriere (format : x y) : ");
        scanf("%d %d", &xx2, &yy2);

        placer_barriere2(plateau,xx2,yy2,&barrieres_restantes);

        printf("Barrieres restantes : %d\n", barrieres_restantes);
    }

    printf("Toutes les barrieres ont été utilisees.\n");
    return 0;
}

// Fonction pour placer une barrière
int placer_barriere2(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx2, int yy2, int *barrieres_restantes) {
    // Vérification des coordonnées (limites du plateau)
    int choix3;
    if (xx2 < 0 || xx2 >= TAILLE_PLATEAU || yy2 < 0 || yy2 >= TAILLE_PLATEAU) {
        printf("Les coordonnees sont en dehors du plateau.\n");
        return 0; // Échec
    }

    // Vérification qu'il n'y a pas déjà une barrière
    if (plateau[xx2][yy2] == 1) {
        printf("Il y a déjà une barriere à cet endroit.\n");
        return 0; // Échec
    }

    printf("Vous avez 2 options :\n");
    printf("1. Placez une barriere verticale\n");
    printf("2. Placez une barriere horizontale\n");
    scanf("%d",&choix3);
    char tabInitial[L][C];
    switch(choix3) {
        case 1 :
            // Placement définitif de la barrière
            plateau[xx2][yy2] = 1;
            plateau[xx2][yy2]= barriere_V;
            (*barrieres_restantes)--;
            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy2][xx2]= barriere_V;
            afficherPlateau(tabInitial);
            break;
        case 2 :
            // Placement définitif de la barrière
            plateau[xx2][yy2] = 1;
            (*barrieres_restantes)--;
            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy2][xx2]= barriere_H;
            afficherPlateau(tabInitial);
            break;
        default :
            printf("Erreur dans la pose de la barrière");
    }
    return 0;
}


int barrieres3() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int barrieres_restantes = MAX_BARRIERES;
    int xx3, yy3;

    printf("Barrieres restantes : %d\n", barrieres_restantes);

    while (barrieres_restantes > 0) {
        printf("\nEntrez les coordonnees d'une case pour placer une barriere (format : x y) : ");
        scanf("%d %d", &xx3, &yy3);

        placer_barriere3(plateau,xx3,yy3,&barrieres_restantes);

        printf("Barrieres restantes : %d\n", barrieres_restantes);
    }

    printf("Toutes les barrieres ont été utilisees.\n");
    return 0;
}

// Fonction pour placer une barrière
int placer_barriere3(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx3, int yy3, int *barrieres_restantes) {
    // Vérification des coordonnées (limites du plateau)
    int choix3;
    if (xx3 < 0 || xx3 >= TAILLE_PLATEAU || yy3 < 0 || yy3 >= TAILLE_PLATEAU) {
        printf("Les coordonnees sont en dehors du plateau.\n");
        return 0; // Échec
    }

    // Vérification qu'il n'y a pas déjà une barrière
    if (plateau[xx3][yy3] == 1) {
        printf("Il y a déjà une barriere à cet endroit.\n");
        return 0; // Échec
    }

    printf("Vous avez 2 options :\n");
    printf("1. Placez une barriere verticale\n");
    printf("2. Placez une barriere horizontale\n");
    scanf("%d",&choix3);
    char tabInitial[L][C];

    switch(choix3) {
        case 1 :
            // Placement définitif de la barrière
            plateau[xx3][yy3] = 1;
            plateau[xx3][yy3]= barriere_V;
            (*barrieres_restantes)--;

            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy3][xx3]= barriere_V;
            afficherPlateau(tabInitial);
            break;
        case 2 :
            // Placement définitif de la barrière
            plateau[xx3][yy3] = 1;
            (*barrieres_restantes)--;
            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy3][xx3]= barriere_H;
            afficherPlateau(tabInitial);
            break;
        default :
            printf("Erreur dans la pose de la barrière");
    }
    return 0;
}


int barrieres4() {
    int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU] = {0};
    int barrieres_restantes = MAX_BARRIERES;
    int xx4, yy4;

    printf("Barrieres restantes : %d\n", barrieres_restantes);

    while (barrieres_restantes > 0) {
        printf("\nEntrez les coordonnees d'une case pour placer une barriere (format : x y) : ");
        scanf("%d %d", &xx4, &yy4);

        placer_barriere4(plateau,xx4,yy4,&barrieres_restantes);

        printf("Barrieres restantes : %d\n", barrieres_restantes);
    }

    printf("Toutes les barrieres ont été utilisees.\n");
    return 0;
}

// Fonction pour placer une barrière
int placer_barriere4(int plateau[TAILLE_PLATEAU][TAILLE_PLATEAU], int xx4, int yy4, int *barrieres_restantes) {
    // Vérification des coordonnées (limites du plateau)
    int choix3;
    if (xx4 < 0 || xx4 >= TAILLE_PLATEAU || yy4 < 0 || yy4 >= TAILLE_PLATEAU) {
        printf("Les coordonnees sont en dehors du plateau.\n");
        return 0; // Échec
    }

    // Vérification qu'il n'y a pas déjà une barrière
    if (plateau[xx4][yy4] == 1) {
        printf("Il y a déjà une barriere à cet endroit.\n");
        return 0; // Échec
    }

    printf("Vous avez 2 options :\n");
    printf("1. Placez une barriere verticale\n");
    printf("2. Placez une barriere horizontale\n");
    scanf("%d",&choix3);
    char tabInitial[L][C];
    switch(choix3) {
        case 1 :
            // Placement définitif de la barrière
            plateau[xx4][yy4] = 1;
            plateau[xx4][yy4]= barriere_V;
            (*barrieres_restantes)--;
            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy4][xx4]= barriere_V;
            afficherPlateau(tabInitial);
            break;
        case 2 :
            // Placement définitif de la barrière
            plateau[xx4][yy4] = 1;
            (*barrieres_restantes)--;
            initialisationPlateau(tabInitial);
            tabInitial[Y1][X1]=pion1;
            tabInitial[Y2][X2]=pion2;
            tabInitial[yy4][xx4]= barriere_H;
            afficherPlateau(tabInitial);
            break;
        default :
            printf("Erreur dans la pose de la barrière");
    }
    return 0;
}



