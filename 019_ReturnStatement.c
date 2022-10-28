/**
 *  Ritorna un valore con una funzione
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

double quadrato(double x) {  //  il tipo di funzione dipende da cosa vuoi ritornato
    return x * x;            //  ritorno un valore
}

int main() {
    double x = quadrato(7);
    printf("%.2lf\n", x);

    return EXIT_SUCCESS;
}