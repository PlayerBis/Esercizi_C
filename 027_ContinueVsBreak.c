/**
 *  Continue = skippa il resto del codice e va all'iterazione successiva
 *  Break =  esce da un loop
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 13) {
            // break;     //  Skippa tutte le restanti iterazioni del loop
            continue;  //  Skippa il resto delle istruzioni e va alla prossima iterazione
        }
        printf("%d\n", i);
    }

    return EXIT_SUCCESS;
}