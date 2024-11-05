#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;

    // Demande à l'utilisateur de nommer le fichier
    printf("Entrez le nom du fichier (avec l'extension, ex: fichier.txt) : ");
    scanf("%99s", filename);

    // Création du fichier
    file = fopen(filename, "w");

    // Fermeture du fichier après la création
    fclose(file);

    // Ouverture du fichier pour l'édition
    char command[150];
    snprintf(command, sizeof(command), "notepad %s", filename);

    int result = system(command); // Ouvre le fichier dans l'éditeur de texte
    return 0;
}
