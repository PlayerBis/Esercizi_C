/**
 * Stampa i tipi di dato principali con i loro specificatori.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    int età = 34;             //  Numero intero
    float altezza = 1.86;     //  Numero decimale
    char voto = 'A';          //  Singolo carattere
    char name[] = "Emanuel";  //  Array di caratteri

    printf("Ciao, %s.\n", name);                         //  Stringhe
    printf("Tu hai %d anni.\n", età);                    //  Interi
    printf("La tua altezza è di %f cm.\n", altezza);     //  Float
    printf("Il voto con cui sei uscito è: %c\n", voto);  //  Carattere

    return EXIT_SUCCESS;
}