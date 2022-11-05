/**
 *  memory          = è un array di bytes
 *  memory block    = è un singolo byte, usato per tenere un valore
 *  memory address  = l'indirizzo di memoria dove il memory block è locato
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

int main() {
    char a = 'A';
    int b = 'B';
    double c = 'C';
    double d[5] = {78};  //  n Bytes(Dimensione array) * 8 Bytes(Dimensione double) = p Bytes

    printf("\nDimensione");
    printf("\n%c  = \t%lld bytes\n", a, sizeof(a));
    printf("%d = \t%lld bytes\n", b, sizeof(b));
    printf("%1.f = \t%lld bytes\n", c, sizeof(c));
    printf("%1.lf = \t%lld bytes\n", d[0], sizeof(d));

    printf("\nIndirizzo di memoria");
    printf("\n%c  = \t%p\n", a, &a);
    printf("%d = \t%p\n", b, &b);
    printf("%1.f = \t%p\n", c, &c);
    printf("%1.lf = \t%p\n", d[0], &d);

    return EXIT_SUCCESS;
}