//
// Created by lily on 24/11/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include "joueurs.h"

void initialiserJoueur(struct Joueur *joueurs, int num) {
    // Demande du pseudo
    fflush(stdin);
    printf("Entrez le pseudo du joueur %d : ", num);
    scanf(" %s", joueurs->pseudo);

    // Demande du pion
    printf("\npion1 = smiley vide,\n pion2 = smiley plein,\n pion3 = coeur,\n pion4 = losange\n");
    int d=0;
    printf("Entrez le numero de pion du joueur %d (ex: 1 ou 2...) : ", num);
    scanf(" %d", &d);
    //attribuer au joueur le pion de son choix
    if (d==1) {
        joueurs->pion=pion1;
    }
    else if (d==2) {
        joueurs->pion=pion2;
    }
    else if (d==3) {
        joueurs->pion=pion3;
    }
    else if (d==4) {
        joueurs->pion=pion4;
    }
    else {
        printf("pion invalide");
    }

    // Initialisation du score
    joueurs->score = 0;

    // Initialisation du nb de barrières
    joueurs->nbBarriere = 0;
}

void declarationJoueur(struct Joueur joueurs[], int m) {
    if (m==2) {
        initialiserJoueur(&joueurs[0],1);
        initialiserJoueur(&joueurs[1],2);
    }
    else if (m==4) {
        initialiserJoueur(&joueurs[0],1);
        initialiserJoueur(&joueurs[1],2);
        initialiserJoueur(&joueurs[2],3);
        initialiserJoueur(&joueurs[3],4);
    }
    else {
        printf("nombre de joueurs non valide, veuillez entrer 2 ou 4 joueurs\n");
    }
}

// Définition de la variable joueurs[4]
struct Joueur joueurs[4];

void afficherJoueur(struct Joueur joueur) {
    printf("informations du joueur :\n");
    printf("Joueur : %s\n", joueur.pseudo);
    printf("Pion : %c\n", joueur.pion);
    printf("Score : %d\n", joueur.score);
    printf("Barrieres : %d\n", joueur.nbBarriere);
}
