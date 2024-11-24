//
// Created by lily on 02/11/2024.
//
#include <stdio.h>
#include "affichage.h"

void initialisationPlateau(char tabInitial[L][C]) {
    int i,j;
    char a=65; //code ASCII lettre 'A'
    char nb1=49; //code ASCII nombre 1

    //boucle par colonne
    for(i=0;i<C;i++) {
        j=0;
        if (i%2==0) {
            tabInitial[i][j] = ' ';
        }
        else {
            // quand la colonne est impaire, on affiche sur la premiere ligne les coordonnées en abcisse (lettres)
            tabInitial[i][j] = a+i/2;
        }
            // on remplit le reste du tableau
        for(j=1;j<L;j++) {
            if (i==0) {
                if (j%2==0) {
                    tabInitial[i][j] = ' ';
                    }
                else {
                    tabInitial[i][j] = nb1+j/2;
                    }
                }
            else {
                if (j%2==0) {
                    if (i%2!=0) {
                        tabInitial[i][j] = espaceVideH;
                    } else {
                        tabInitial[i][j] = ' ';
                    }
                } else {
                    if (i%2==0) {
                        tabInitial[i][j] = espaceVideV;
                    } else {
                        tabInitial[i][j] = ' ';
                    }
                }
            }
        }
    }
}

void afficherPlateau(char tabPlateau[L][C]) {
    int col,lig;
    printf("Voici le plateau de jeu :\n\n");
    for(lig=0;lig<L;lig++) {
        for(col=0;col<C;col++) {
            printf("%c",tabPlateau[col][lig]);
        }
        printf("\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
int scoreFichier() {
    char filename[100];
    FILE *file;
    // Demande à l'utilisateur de nommer le fichier
    printf("Entrez le nom du fichier (avec l'extension, ex: fichier.txt) : ");
    scanf("%99s", filename);

    // Création du fichier
    file = fopen(filename, "w");

    // Fermeture du fichier après la création
    fclose(file);

void afficherInfosJoueur() {
    // Ouverture du fichier pour l'édition
    char command[150];
    snprintf(command, sizeof(command), "notepad %s", filename); //Ouvre le fichier avec Notepad
     int result = system(command); // Ouvre le fichier dans l'éditeur de texte
    return 0;
}

}
void menuJoueurs() {
    int choix1;
    do {
        printf("\n");
        printf("C'est a toi, (pseudo)\n");
        printf("Tu as le choix entre differentes actions : \n");
        printf("1. Te deplacer\n");
        printf("2. Placer une barriere\n");
        printf("3. Passer ton tour\n");
        printf("4. Interrompre la partie et la Quitter\n");
        printf("Entrez votre choix : ");
        // Récupération du choix de l'utilisateur
        scanf("%d", &choix1);
        // Gestion du choix de l'utilisateur
        switch (choix1) {
            case 1:
                //Sous-programme déplacements
                    break;
            case 2:
                //Sous-programmes placements barrières
                    break;
            case 3:
                //Sous-programmes passer son tour
                    break;
            case 4:
                //Sous-programmes interrompre et la Quitter
                    break;
        }
        if(choix1>4||choix1<1) {
            printf("Choix invalide, veuillez reessayer");
        }
    }while(choix1>5||choix1<1);
}
void deplacements()
{
    int choix2;
    printf("\n");
        printf("Pour les deplacements, tu peux :\n");
        printf("1. Aller en Haut\n");
        printf("2. Aller en Bas\n");
        printf("3. Aller à Droite\n");
        printf("4. Passer à Gauche\n");
        printf("Entrez votre choix : ");
    // Récupération du choix de l'utilisateur
        scanf("%d", &choix2);
    // Gestion du choix de l'utilisateur
        switch (choix2) {
            case 1:
                //Sous-programme déplacements
                break;
            case 2:
                //Sous-programmes placements barrières
                break;
            case 3:
                //Sous-programmes passer son tour
                break;
            case 4:
                //Sous-programmes interrompre et la Quitter
                break;
        }
}
