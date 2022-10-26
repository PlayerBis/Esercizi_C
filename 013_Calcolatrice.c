/**
 *  Scrivi un programma in grado di effettuare più di una operazione
 *  su due numeri.
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

int main() {
    char operatore;
    double num1, num2, result;

    printf("\nInserisci un operatore (+, -, *, /): ");
    scanf("%c", &operatore);

    printf("\nInserisci il numero (1): ");
    scanf("%lf", &num1);

    printf("\nInserisci il numero (2): ");
    scanf("%lf", &num2);

    switch (operatore) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            result = num1 / num2;
            printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            break;
        default:
            printf("\n%c non è un operatore valido.\n", operatore);
    }

    return EXIT_SUCCESS;
}