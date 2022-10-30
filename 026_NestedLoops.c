/**
 *  Loops dentro altri loops
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    int righe, colonne;
    char simbolo;

    printf("\nQuante righe vuoi? ");
    scanf("%d", &righe);

    printf("\nQuante colonne vuoi? ");
    scanf("%d", &colonne);

    printf("\nChe simbolo vuoi utilizzare? ");
    scanf(" %c", &simbolo);

    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            printf("%c ", simbolo);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}