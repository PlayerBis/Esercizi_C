/**
 *  pseudo random numbers = Un set di valori o elementi che sono statisticamente randomici
 *                          (Da non utilizzare per la sicurezza crittografica)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EXIT_SUCCESS 0

int main() {
    //  Uso il tempo corrente per generare un seed (s = seed, rand = random)
    srand(time(0));  //  Senza seed generato da srand() il valore non è più pseudo casuale

    //  time() ti ritorna quanti secondi sono passati dal 01/01/1970
    int timeS = ((time(0)));                         //  secondi
    int timeM = ((time(0) / 60));                    //  minuti
    int timeO = ((time(0) / 60) / 60);               //  ore
    int timeG = ((time(0) / 60) / 60) / 24;          //  giorni
    int timeA = (((time(0) / 60) / 60) / 24) / 365;  //  anni
    // stampo
    printf("\n Dal 01/01/1970 sono trascorsi:\n");
    printf("\n Secondi: %2d", timeS);
    printf("\n Minuti: %2d", timeM);
    printf("\n Ore: %2d", timeO);
    printf("\n Giorni: %2d", timeG);
    printf("\n Anni: %2d\n\n", timeA);

    /**
     *     1) rand() ritorna un numero nell'intervallo 0-32,767
     *     2) %6 ritorna un numero nell'intervallo 0-5 (aggiungendo 1 = 1-6)
     */
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    // stampo
    printf("Numero casuale 1: %d\n", num1);
    printf("Numero casuale 2: %d\n", num2);
    printf("Numero casuale 3: %d\n", num3);

    return EXIT_SUCCESS;
}