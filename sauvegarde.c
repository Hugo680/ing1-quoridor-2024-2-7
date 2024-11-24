#include <stdio.h>
#include "sauvegarde.h"

void sauvegarderPartie(Joueur joueurs[], int nbJoueurs, char plateau[TAILLE_PLATEAU][TAILLE_PLATEAU]) {
    FILE *fichier = fopen("sauvegarde_partie.txt", "w");  // Ouvre le fichier en mode écriture
    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier de sauvegarde.\n");
        return;
    }

    // Sauvegarder le nombre de joueurs
    fprintf(fichier, "%d\n", nbJoueurs);

    // Sauvegarder les informations de chaque joueur
    for (int i = 0; i < nbJoueurs; i++) {
        fprintf(fichier, "%s %d %d %d\n", joueurs[i].nom, joueurs[i].position[0], joueurs[i].position[1], joueurs[i].nbBarrieres);
    }

    // Sauvegarder l'état du plateau
    for (int i = 0; i < TAILLE_PLATEAU; i++) {
        for (int j = 0; j < TAILLE_PLATEAU; j++) {
            fprintf(fichier, "%c", plateau[i][j]);
        }
        fprintf(fichier, "\n");
    }

    fclose(fichier);  // Ferme le fichier après l'écriture
    printf("Partie sauvegardee avec succes !\n");
}
