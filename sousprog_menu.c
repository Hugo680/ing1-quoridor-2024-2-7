//
// Created by lily on 03/11/2024.
//

#include <stdio.h>
#include "sousprog_menu.h"
#include <stdlib.h>
#include "affichage.h"
#include "joueurs.h"

void quitterJeu() {
    int s;
    printf ("Etes-vous sur de vouloir quitter? Si oui tapez 1 sinon tapez 0 :\n");
    scanf("%d", &s);
    while (s != 1 && s != 0) {
            printf("Erreur de la valeur saisie, veuillez choisir 0 ou 1 :\n");
            scanf("%d", &s);
        }
    if (s == 1) {
        printf("Merci d'avoir joue, a bientot.\n");
        exit(0);
    }
}

void nouvellePartie() {
    char tabInitial[L][C];
    int m;
    // Demander à nouveau à l'utilisateur de choisir le nombre de joueurs (2 ou 4)
    do {
        printf("Entrez le nombre de joueurs (2 ou 4) : ");
        scanf("%d", &m);
    } while (m != 2 && m != 4);  // Boucle tant que l'entrée n'est pas 2 ou 4

    // Initialisation des joueurs
    declarationJoueur(joueurs, m);

    initialisationPlateau(tabInitial);

    struct Joueur joueur;
    if (m == 2) {
        tabInitial[9][1]=joueurs[0].pion;
        tabInitial[9][17]=joueurs[1].pion;
    }
    else if (m == 4) {
        tabInitial[9][1]=joueurs[0].pion;
        tabInitial[9][17]=joueurs[1].pion;
        tabInitial[1][9]=joueurs[2].pion;
        tabInitial[17][9]=joueurs[3].pion;
    }
    afficherPlateau(tabInitial);
}

void sauvegarderPartie(Joueur joueurs[], int m, char plateau[C][L]) {
    FILE *fichier = fopen("sauvegarde_partie.txt", "w");  // Ouvre le fichier en mode écriture
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier de sauvegarde.\n");
        return;
    }

    // Sauvegarder le nombre de joueurs
    fprintf(fichier, "%d\n", m);

    // Sauvegarder les informations de chaque joueur
    for (int i = 0; i < m; i++) {
        fprintf(fichier, "%s %d %d %d\n", joueurs[i].pseudo, joueurs[i].position[0], joueurs[i].position[1], joueurs[i].nbBarrieres);
    }

    // Sauvegarder l'état du plateau
    for (int i = 0; i < C; i++) {
        for (int j = 0; j < L; j++) {
            fprintf(fichier, "%c", tabPlateau[i][j]);
        }
        fprintf(fichier, "\n");
    }

    fclose(fichier);  // Ferme le fichier après l'écriture
    printf("Partie sauvegardee avec succes !\n");
}

void afficherAide() {
    printf("*************************************************\n");
    printf("             Regles du jeu Quoridor            \n");
    printf("*************************************************\n");
    printf("Le but du jeu est d'etre le premier a atteindre \n");
    printf("la ligne opposee de son cote du plateau, tout en \n");
    printf("bloquant les autres joueurs a l'aide de barrieres.\n\n");
    printf("1. Chaque joueur commence sur la ligne centrale. \n");
    printf("2. Un joueur peut deplacer son pion d'une case vers \n");
    printf("   le haut, le bas, la gauche ou la droite.\n");
    printf("3. A chaque tour, un joueur peut soit deplacer son \n");
    printf("   pion, soit poser une barriere.\n");
    printf("4. Une barriere bloque une case, mais elle ne peut \n");
    printf("   pas etre placee sur une case deja occupee par un \n");
    printf("   joueur ou une autre barriere.\n");
    printf("5. Un joueur perd la partie si son pion est bloque \n");
    printf("   par les barrieres et ne peut plus avancer.\n\n");
    printf("*************************************************\n");
    printf("     Bonne chance et amusez-vous bien !\n");
    printf("*************************************************\n");
}
