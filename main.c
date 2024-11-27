#include <stdio.h>
#include "affichage.h"
#include "hasard.h"
#include "sousMenu.h"
#include "joueurs.h"
#include "barriere.h"
#include "deplacements.h"


int main() {
    int choix;
    do {
        // Affichage du menu
        printf("=====================================\n");
        printf("          Bienvenue au Quoridor      \n");
        printf("=====================================\n");
        printf("1. Lancer une nouvelle partie\n");
        printf("2. Reprendre une partie sauvegardee\n");
        printf("3. Afficher l'aide\n");
        printf("4. Afficher les scores\n");
        printf("5. Quitter le jeu\n");
        printf("=====================================\n");
        printf("Entrez votre choix : ");

        // Récupération du choix de l'utilisateur
        scanf("%d", &choix);

        // Gestion du choix de l'utilisateur
        switch (choix) {
            case 1:
                char tabInitial[L][C];
                int m;
            //Sous-programmes nouvellePartie();
            do {
                printf("Le nombre de joueurs est de 2 ou 4 ?\n");
                scanf("%d",&m);
            }while((m!=2)&&(m!=4));

            // Initialisation des joueurs
            declarationJoueur(joueurs, m);

            initialisationPlateau(tabInitial);

            struct Joueur joueur;
            if(m==2) {
                tabInitial[Y1][X1]=joueurs[0].pion;
                tabInitial[Y2][X2]=joueurs[1].pion;
                afficherPlateau(tabInitial);
                printf("\n");
                int premierJoueur = choisirPremierJoueur(m);//Fonction qui determine le joueur choisi au hasard
                printf("Le premier joueur sera le %d\n", premierJoueur);//affichage du joueur choisi au hasar
                while (1) {
                    menuJoueurs1();
                    menuJoueurs2();
                    }
            }else {
                initialisationPlateau(tabInitial);
                tabInitial[Y1][X1]=joueurs[0].pion;
                tabInitial[Y2][X2]=joueurs[1].pion;
                tabInitial[Y3][X3]=joueurs[2].pion;
                tabInitial[Y4][X4]=joueurs[3].pion;
                afficherPlateau(tabInitial);
                printf("\n");
                int premierJoueur = choisirPremierJoueur(m);//Fonction qui determine le joueur choisi au hasard
                printf("Le premier joueur sera %d\n", premierJoueur);//affichage du joueur choisi au hasar
                while (1) {
                    menuJoueurs1();
                    menuJoueurs2();
                    menuJoueurs3();
                    menuJoueurs4();
                }
            }
            break;
            case 2:
                //Sous-programmes reprendrePartie();
                    break;
            case 3:
                //Sous-programmes afficherAide();
                    afficherAide();
                    break;
            case 4:
                //Sous-programmes afficherScores();
                    scoreFichier();
                    break;
            case 5:
                //Sous-programmes pour quitter le jeu
                quitterJeu();
                    break;
        }

        printf("\n"); // Saut de ligne pour plus de lisibilité
        if(choix>5||choix<1) {
            printf("Choix invalide, veuillez reessayer\n");
        }
    }while(choix>5||choix<1);
}

