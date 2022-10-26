/**
 *  Operatori logici
 *  AND --> &&
 *  OR  --> ||
 *  NOT --> !
 */

#include <stdbool.h>
#include <stdio.h>

#define EXIT_SUCCESS 0;

int main() {
    float temp = 15;
    bool pioggia = false;

    if (temp < 10 || temp > 30 || pioggia) {
        printf("\nIl tempo non è buono. È meglio stare a casa!\n");
    } else {
        printf("\nIl tempo è buono. Puoi uscire!\n");
    }

    return EXIT_SUCCESS;
}