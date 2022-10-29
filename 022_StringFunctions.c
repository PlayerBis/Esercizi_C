/**
 *  Uso della libreria stringhe
 */

#include <stdio.h>
#include <string.h>  //  libreria utilizzata in questi esempi

#define EXIT_SUCCESS 0

int main() {
    char nome[100] = "Emanuel";  //  l'array deve essere abbastanza grande
    // char cognome[] = "Bisicchia";

    // strcat(nome, cognome);       //  concatena la stringa 2 con la 1
    // strncat(nome, cognome, 3);   //  concatena n caratteri della stringa 2 con la 1
    // strcpy(nome, cognome);       //  copia la stringa 2 nella 1
    // strncpy(nome, cognome, 3);   //  copia n caratteri della stringa 2 nella 1

    int result = strlen(nome);  //  ritorna la lunghezza della stringa

    printf("\n%d\n\n", result);

    return EXIT_SUCCESS;
}