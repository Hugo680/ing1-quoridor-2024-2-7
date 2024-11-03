#include <stdio.h>
#include "affichage.h"


int main() {
    char tabInitial[L][C];
    initialisationPlateau(tabInitial);
    afficherPlateau(tabInitial);
    return 0;
}


