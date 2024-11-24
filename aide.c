#include <stdio.h>

void aide(void) {
    printf("*************************************************\n");
    printf("             Règles du jeu Quoridor            \n");
    printf("*************************************************\n");
    printf("Le but du jeu est d'être le premier à atteindre \n");
    printf("la ligne opposée de son côté du plateau, tout en \n");
    printf("bloquant les autres joueurs à l'aide de barrières.\n\n");
    printf("1. Chaque joueur commence sur la ligne centrale. \n");
    printf("2. Un joueur peut déplacer son pion d'une case vers \n");
    printf("   le haut, le bas, la gauche ou la droite.\n");
    printf("3. À chaque tour, un joueur peut soit déplacer son \n");
    printf("   pion, soit poser une barrière.\n");
    printf("4. Une barrière bloque une case, mais elle ne peut \n");
    printf("   pas être placee sur une case déjà occupée par un \n");
    printf("   joueur ou une autre barrière.\n");
    printf("5. Un joueur perd la partie si son pion est bloqué \n");
    printf("   par les barrières et ne peut plus avancer.\n\n");
    printf("*************************************************\n");
    printf("     Bonne chance et amusez-vous bien !\n");
    printf("*************************************************\n");
}
