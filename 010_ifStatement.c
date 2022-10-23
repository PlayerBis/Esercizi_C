/**
 *  Data un'età in input, stabilisci quanto è grande una persona
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    int età, bool;

    printf("\nQuanti anni hai? ");
    scanf("%d", &età);

    if (età <= 0) {
        printf("\nNon puoi avere questa età.\n\n");
    } else if (età < 18) {
        printf("\nSei un adolescente.\n\n");
    } else if (età < 60) {
        printf("\nSei un adulto.\n\n");
    } else if (età < 120) {
        printf("\nSei un anziano.\n\n");
    } else {
        printf("\nProbabilmente avrai trovato la pietra filosofale.\n\n");
    }

    return EXIT_SUCCESS;
}