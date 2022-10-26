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
    bool pioggia = false;

    /**
     *  Posso omettere l'assegnazione, nella condizione dell'if,
     *  se il dato è di tipo booleano.
     *  Con l'operatore (!), posso invertire lo stato booleano.
     */

    if (!pioggia) {
        printf("\nFuori non piove.\n");
    } else {
        printf("\nFuori sta piovendo.\n");
    }

    return EXIT_SUCCESS;
}