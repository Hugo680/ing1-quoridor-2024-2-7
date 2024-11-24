//
// Created by lily on 24/11/2024.
//

#ifndef JOUEURS_H
#define JOUEURS_H
#define pion1 1
#define pion2 2
#define pion3 3
#define pion4 4

struct Joueur {
    char pseudo[50];//pseudo du joueur
    char pion;//pion du joueur
    int score;//score du joueur
    int nbBarriere;//nombre de barrière du joueur
    int position[2];//position du joueur
};

void initialiserJoueur(struct Joueur *joueurs, int num);
void declarationJoueur(struct Joueur joueurs[], int m);
void afficherJoueur(struct Joueur joueur);

// Déclaration d'un tableau pour les joueurs
extern struct Joueur joueurs[4];

#endif //JOUEURS_H
