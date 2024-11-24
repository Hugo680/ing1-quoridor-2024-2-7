//
// Created by lily on 03/11/2024.
//

#ifndef INFOJEU_H
#define INFOJEU_H
#define L 18
#define C 18

void sauvegarderPartie(Joueur joueurs[], int m, char plateau[C][L]);

void infosPrep();
void quitterJeu();
void nouvellePartie();
void reprendrePartie();
void afficherAide();
void saisiePseudo();


#endif //INFOJEU_H
