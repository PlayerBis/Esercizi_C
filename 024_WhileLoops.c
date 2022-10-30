/**
 *  While loops = ripete il ciclo infinite volte finchè la condizione sarà vera
 */

#include <stdio.h>
#include <string.h>

#define EXIT_SUCCESS 0

int main() {
    char nome[25];

    printf("\nQual'è il tuo nome?: ");
    fgets(nome, 25, stdin);

    while (strlen(nome) == 1) {  //  Controllo che abbia scritto almeno una lettera.
        printf("\nNon hai scritto nessun nome!\n");

        printf("\nQual'è il tuo nome?: ");
        fgets(nome, 25, stdin);
    };

    printf("\n%s\n", nome);

    return EXIT_SUCCESS;
}