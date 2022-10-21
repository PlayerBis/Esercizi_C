/**
 * Usa tutti gli operatori aritmetici e poi stampa tutto
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    short int a = 5, somma, sommaCompatta = 4, sottr, molt, modulo, inc, dec;

    /**
     *  b e div devono essere float, altrimenti durante la divisione
     *  si perdono informazioni sui decimali.
     */
    float b = 2, div;

    somma = a + b;
    sommaCompatta += a;
    sottr = a - b;
    molt = a * b;
    div = a / b;
    modulo = a % (int)b;  // casting ad intero
    inc = ++a;            // incremento prefisso
    dec = --b;            // decremento prefisso

    printf("\nSomma = %d\n", somma);
    printf("\nSommaCompatta = %d\n", sommaCompatta);
    printf("Sottrazione = %d\n", sottr);
    printf("Moltiplicazione = %d\n", molt);
    printf("Divisione = %.2f\n", div);
    printf("Modulo = %d\n", modulo);
    printf("Incremento di a= %d\n", inc);
    printf("Decremento di b= %d\n\n", dec);

    return EXIT_SUCCESS;
}