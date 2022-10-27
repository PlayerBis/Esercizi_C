/**
 *  Scrivi una funzione a cui bisogna passare dei parametri.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

void compleanno(char x[], int y) {
    printf("\nTanti auguri %s!\n", x);
    printf("Hai compiuto %d anni.\n\n", y);
}

int main() {
    char nome[] = "Emanuel";
    int età = 22;

    compleanno(nome, età);

    return EXIT_SUCCESS;
}