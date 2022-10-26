/**
 *  Converti una temperatura da Celsius a Fahrenheit e viceversa.
 */

#include <ctype.h>  //  Dichiara funzioni per la classificazione dei caratteri
#include <stdio.h>

#define EXIT_SUCCESS 0;

int main() {
    char unità;
    float temp;
    float tempConvertita;

    printf("\nLa temperatura da convertire è in gradi Celsius (C) o Fahrenheit (F)?: ");
    scanf("%c", &unità);

    if (unità == 'C') {
        printf("\nInserisci la temperatura: ");
        scanf("%f", &temp);
        tempConvertita = (temp * 1.8) + 32;
        printf("\n%.2f°C = %.2f°F\n", temp, tempConvertita);
    } else if (unità == 'F') {
        printf("\nInserisci la temperatura: ");
        scanf("%f", &temp);
        tempConvertita = (temp - 32) / 1.8;
        printf("\n%.2f°F = %.2f°C\n", temp, tempConvertita);
    } else {
        printf("\nCarattere non valido, inserire (F) o (C).\n");
    }

    return EXIT_SUCCESS;
}