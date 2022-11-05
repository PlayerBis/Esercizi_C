/**
 *  Bitwise operator =  operatori speciali utilizzati nella programmazione a livello di bit
 *                      (Conoscere il binario è fondamentale per capire questo concetto!)
 *
 *                      &   = AND           restituisce VERO se entrambi i valori sono VERI
 *                      |   = OR            restituisce VERO se almeno uno dei valori è VERO
 *                      ^   = XOR           restituisce VERO se solo uno dei valori è VERO
 *                      <<  = left shift
 *                      >>  = right shift
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

//  Prototipo
void intToBin(int);

int main() {
    const int x = 6;   //  6   = 00000110
    const int y = 12;  //  12  = 00001100
    int z = 0;         //  0   = 00000000

    z = x & y;
    printf("\nAND (&) tra due numeri\n");
    intToBin(x);
    intToBin(y);
    printf("AND\t=\t%d\n", z);
    intToBin(z);

    z = x | y;
    printf("\nOR (|) tra due numeri\n");
    intToBin(x);
    intToBin(y);
    printf("OR\t=\t%d\n", z);
    intToBin(z);

    z = x ^ y;
    printf("\nXOR (^) tra due numeri\n");
    intToBin(x);
    intToBin(y);
    printf("XOR\t=\t%d\n", z);
    intToBin(z);

    z = x << 1;
    printf("\nLeft Shift (<<) di un numero\n");
    intToBin(x);
    printf("<<\t=\t%d\n", z);
    intToBin(z);

    z = x >> 1;
    printf("\nRight Shift (>>) di un numero\n");
    intToBin(x);
    printf(">>\t=\t%d\n", z);
    intToBin(z);

    return EXIT_SUCCESS;
}

void intToBin(int numInt) {
    int bin[64];
    int i = 0;

    //  riempio l'array con degli 0
    printf("%d\t= \t", numInt);
    for (int x = 0; x < 64; x++) {
        bin[x] = 0;
    };
    //  converto il numero da base 10 a base 2
    for (; numInt > 0; i++) {
        bin[i] = numInt % 2;
        numInt /= 2;  //  serve a fermarsi a 0
    };
    //  stampo l'array al contrario
    for (int j = 7; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    printf("\n");
}
