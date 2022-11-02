/**
 *  Cambio il valore di una variabile con un'altra utilizzandone una di appoggio
 */

#include <stdio.h>
#include <string.h>

#define EXIT_SUCCESS 0

int main() {
    int x = 5;
    int y = 3;
    int temp;
    char a[] = "Emanuel";
    char b[] = "Martina";
    char tempChar[10];

    temp = x;  //  Conservo il valore di x in temp
    x = y;     //  Metto y in x
    y = temp;  //  Sposto il valore conservato di x in temp dentro y

    //  Faccio la stessa cosa ma con le stringhe, usando una funzione della libreria string.h
    strcpy(tempChar, a);
    strcpy(a, b);
    strcpy(b, tempChar);

    //  stampo il valore di x scambiato con il valore di y
    printf("\nx: %d, y: %d\n", x, y);

    //  stampo il valore di a scambiato con il valore di b
    printf("\na: %s, b: %s\n\n", a, b);

    return EXIT_SUCCESS;
}