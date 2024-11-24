//
// Created by lily on 03/11/2024.
//

#ifndef INFOJEU_H
#define INFOJEU_H
#define L 18
#define C 18
#define TAILLE_PLATEAU 9

typedef struct {
    char nom[50];
    int position[2];
    int nbBarrieres;
} Joueur;

void sauvegarderPartie(Joueur joueurs[], int nbJoueurs, char plateau[TAILLE_PLATEAU][TAILLE_PLATEAU]);

void infosPrep();
void quitterJeu();
void nouvellePartie();
void reprendrePartie();
void afficherAide();
void saisiePseudo();


#endif //INFOJEU_H
