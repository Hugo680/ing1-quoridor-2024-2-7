#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fonction pour choisir un joueur qui commencera au hasard
int choisirPremierJoueur(int nombreJoueurs) {
    srand (time(NULL));//Focntion qui génère un joueur au hasard
    return rand() % nombreJoueurs + 1;// Fonction qui retourne un joueur entre 1 et NombreJoueurs
}