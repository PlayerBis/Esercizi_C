/**
 *  Scrivi un programma che ti dia un feedback
 *  in base al voto che hai preso.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    char grade;

    printf("\nScrivi il tuo voto in lettera [A,F]: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("\nPerfetto!\n\n");
            break;  //  si usa per interrompere le istruzioni in un blocco
        case 'B':
            printf("\nOttimo!\n\n");
            break;
        case 'C':
            printf("\nPotevi fare meglio.\n\n");
            break;
        case 'D':
            printf("\nSei andato male.\n\n");
            break;
        case 'E':
            printf("\nSei andato molto male.\n\n");
            break;
        case 'F':
            printf("\nNon hai studiato nulla. \n\n");
            break;
        default:  //  non ha bisogno del break, controlla tutti gli altri casi
            printf("\nPerfavore inserisci un voto valido.\n\n");
    }

    return EXIT_SUCCESS;
}