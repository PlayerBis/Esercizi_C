/**
 *  Usa le funzioni per la riusabilità del codice.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

void compleanno() {
    printf("\nTanti auguri di buon compleanno!\n");
    printf("\nTanti auguri di buon compleanno!\n");
    printf("\nTanti auguri di buon compleanno!\n");
    printf("\nTanti auguri di buon compleanno!\n\n");
}

int main() {
    compleanno();
    compleanno();
    compleanno();

    return EXIT_SUCCESS;
}