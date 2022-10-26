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

    unità = toupper(unità);

    if (unità == 'C') {
        printf("\nInserisci la temperatura in Celsius: ");
        scanf("%f", &temp);
        tempConvertita = (temp * 1.8) + 32;  //  Converto da C a F
        printf("\n%.1f°C = %.1f°F\n", temp, tempConvertita);
    } else if (unità == 'F') {
        printf("\nInserisci la temperatura in Fahrenheit: ");
        scanf("%f", &temp);
        tempConvertita = (temp - 32) / 1.8;  //  Converto da F a C
        printf("\n%.1f°F = %.1f°C\n", temp, tempConvertita);
    } else {
        printf("\n %c non è un carattere valido, inserire (F) o (C).\n", unità);
    }

    return EXIT_SUCCESS;
}