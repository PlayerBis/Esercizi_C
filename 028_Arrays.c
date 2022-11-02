/**
 *  Array = una struttura dati in grado di archiviare più dati dello stesso tipo
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    double prezzi[] = {5.0, 10.0, 15.0, 25.0};
    int lenghtPrezzi = (sizeof(prezzi) / sizeof(prezzi[0]));

    for (int i = 0; i < lenghtPrezzi; i++) {
        printf("%d. Prezzo: %.2lf\n", i, prezzi[i]);
    }

    printf("\nIl prezzo è di %lf euro.\n", prezzi[0]);

    return EXIT_SUCCESS;
}
