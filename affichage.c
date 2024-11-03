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




void afficherInfosJoueur() {

}