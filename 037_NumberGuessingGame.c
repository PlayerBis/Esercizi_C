/**
 *  Number guessing game = Indovina un numero da MIN A MAX
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EXIT_SUCCESS 0

int main() {
    const int MIN = 1;
    const int MAX = 10;
    char numInput[15];
    int numInputInt = 0;
    int risposta;
    int tentativi = 0;

    srand(time(0));                   //  Uso il tempo corrente come seed
    risposta = (rand() % MAX) + MIN;  //  genero un numero nell'intervallo MIN-MAX

    printf("\n****************************************");
    printf("\n\nIl numero e' compreso tra %d e %d", MIN, MAX);
    printf("\n\n****************************************");

    do {
        tentativi++;

        printf("\n\n> Inserisci il numero da indovinare: ");
        scanf("%s", numInput);
        numInputInt = atoi(numInput);

        if (numInputInt == 0) {
            printf("\n****************************************");
            printf("\n\nInserimento non valido. \nPerfavore inserisci un numero!\n");
            printf("\n****************************************");
        } else {
            if (numInputInt > risposta) {
                printf("\n****************************************");
                printf("\n\nTroppo grande!");
                printf("\n\n****************************************");
            } else if (numInputInt < risposta) {
                printf("\n****************************************");
                printf("\n\nTroppo piccolo!");
                printf("\n\n****************************************");
            } else {
                printf("\n****************************************");
                printf("\n\nHai indovinato, congratulazioni :D");
                printf("\n\n****************************************");
                printf("\n----------------------------------------");
                printf("\nRisposta:    %d", risposta);
                printf("\nTentativi:   %d", tentativi);
                printf("\n----------------------------------------\n\n");
            }
        }

    } while (numInputInt != risposta);

    system("PAUSE");
    return EXIT_SUCCESS;
}