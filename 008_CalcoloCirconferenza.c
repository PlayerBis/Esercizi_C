/**
 *  Scrivi un programma che calcoli la circonferenza e l'area di un cerchio
 *  partendo dal raggio.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    const float PI = 3.141;
    float raggio, circ, area;  //  raggio, circonferenza, area

    printf("\nInserisci il raggio del cerchio: ");
    scanf("%f", &raggio);

    circ = (raggio * 2) * PI;
    area = PI * (raggio * raggio);

    printf("La circonferenza è di %.3f\n", circ);
    printf("L'area è di %.3f\n\n", area);

    return EXIT_SUCCESS;
}