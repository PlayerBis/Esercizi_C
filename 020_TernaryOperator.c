/**
 *  Stampa il numero più grande tra due.
 *
 *  Ternary operator = una shortcut dell'if/else
 *  (condizione) ? valore se vero : valore se falso
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int max = findMax(32, 5);
    printf("%d\n", max);
    return EXIT_SUCCESS;
}