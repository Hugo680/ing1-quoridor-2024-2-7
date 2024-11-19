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
    tabInitial[9][1]=pion1;
    tabInitial[9][17]=pion2;
    tabInitial[1][9]=pion3;
    tabInitial[17][9]=pion4;
    afficherPlateau(tabInitial);

    (DEBUT à rajouter main du sous programme pour tirer au hasard le 1er joueur:)
    #include <stdio.h>
    #include "hasard.h"

int main(void) {
    int nombreJoueurs;
    printf("Selectionner le nombre de joueurs:\n");//demande à l'utilisateur de saisir le nombre de joueurs
    scanf("%d", &nombreJoueurs);

    if (nombreJoueurs == 2 || nombreJoueurs == 4) {
        int premierJoueur = choisirPremierJoueur(nombreJoueurs);//Fonction qui determine le joueur choisi au hasard
        printf("Le premier joueur sera %d", premierJoueur);//affichage du joueur choisi au hasard
    } else {
        printf("Le nombre de joueurs n'est pas valide, veuillez choisir 2 ou 4");
        //Affiche que le programme ne marche pas si le nombre de joueur de joueur est ni de 2 ou 4
    }
}
    (FIN sous programme hasard)
    return 0;
}


