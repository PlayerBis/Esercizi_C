/**
 *  While loop = controlla la condizione e poi esegue il codice
 *  Do while loop = esegue il codice e poi controlla la condizione
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    int num = 0;
    int somma = 0;

    do {
        printf("\nScrivi un numero superiore a 0: ");
        scanf("%d", &num);

        if (num > 0) {
            somma += num;
        }
    } while (num > 0);

    printf("\nLa somma è: %d\n\n", somma);

    return EXIT_SUCCESS;
}