/**
 *  I prototipi di funzione servono per mattchare bene i parametri delle funzioni.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

//  Prototipi
void ciao(char[], int);

int main() {
    ciao("Emanuel", 22);

    return EXIT_SUCCESS;
}

void ciao(char nome[], int anno) {
    printf("\nCiao %s, tu hai %d anni.\n\n", nome, anno);
}