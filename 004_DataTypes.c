/**
 * Stampa tutti i tipi di dato
 *
 *  Alcuni specificatori
 *  %.1 =   precisione decimale
 *  %1  =   spaziatura
 *  %-  =   allineato a sinistra
 */

#include <stdbool.h>  // Per il tipo di dato bool
#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    char a = 'C';          //  carattere singolo    %c
    char b[] = "Emanuel";  //  array di caratteri   %s

    float c = 3.141592;            // 4 bytes    %f
    double d = 3.141592653589793;  // 8 bytes    %lf

    bool e = true;  // 1 bytes  %d

    char f = 100;           //  1 bytes %d or %c
    unsigned char g = 255;  //  1 bytes %d or %c

    short int h = 32767;           //  2 bytes %d
    unsigned short int i = 65535;  //  2 bytes %d

    int j = 2147483647;            //  4 bytes %d
    unsigned int k = 4294967295L;  //  4 bytes %d

    long long int l = 9223372036854775807;             //  8 bytes %lld
    unsigned long long int m = 18446744073709551615U;  //  8 bytes %llu

    printf("\nchar a: %c\n", a);
    printf("char b[]: %s\n\n", b);
    printf("float c: %0.2f\n", c);  // 0.2 indica le cifre dopo la virgola
    printf("double d: %lf\n\n", d);
    printf("bool e: %d\n\n", e);
    printf("char f: %d\n", f);
    printf("unsigned char g: %d\n\n", g);
    printf("short int h: %d\n", h);
    printf("unsigned short int i: %d\n\n", i);
    printf("int j: %d\n", j);
    printf("unsigned int k: %u\n\n", k);
    printf("long long int l: %lld\n", l);
    printf("unsigned long long int m: %llu\n\n", m);

    return EXIT_SUCCESS;
}
