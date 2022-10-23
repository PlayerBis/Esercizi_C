/**
 *  Calcola l'ipotenusa di un triangolo
 */

#include <math.h>
#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    double a, b, ipotenusa;

    printf("Inserisci la lunghezza del lato a: ");
    scanf("%lf", &a);
    printf("Inserisci la lunghezza del lato b: ");
    scanf("%lf", &b);

    ipotenusa = sqrt(pow(a, 2) + pow(b, 2));

    printf("\nL'ipotenusa è: %.3lf\n", ipotenusa);

    return EXIT_SUCCESS;
}