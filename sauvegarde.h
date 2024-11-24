#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

#define TAILLE_PLATEAU 9

typedef struct {
    char nom[50];
    int position[2];
    int nbBarrieres;
} Joueur;

void sauvegarderPartie(Joueur joueurs[], int nbJoueurs, char plateau[TAILLE_PLATEAU][TAILLE_PLATEAU]);

#endif // SAUVEGARDE_H
