#include <stdio.h>
#include "affichage.h"


int main() {
    int choix;

    // Boucle principale du menu
    do {
        // Affichage du menu
        printf("=====================================\n");
        printf("          Bienvenue au Quoridor      \n");
        printf("=====================================\n");
        printf("1. Lancer une nouvelle partie\n");
        printf("2. Reprendre une partie sauvegardée\n");
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
                //Sous-programmes nouvellePartie();
                break;
            case 2:
                //Sous-programmes reprendrePartie();
                break;
            case 3:
                //Sous-programmes afficherAide();
                break;
            case 4:
                //Sous-programmes afficherScores();
                break;
            case 5:
                //Sous-programmes quitterJeu();
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
                break;
        }

        printf("\n"); // Saut de ligne pour plus de lisibilité
    } while (choix != 5); // Le menu boucle tant que l'utilisateur ne choisit pas de quitter
    
    char tabInitial[L][C];
    initialisationPlateau(tabInitial);
    afficherPlateau(tabInitial);
    return 0;
}


