/**
 *  Creare un file in C
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

int main() {
    /**
     *  FILE = tipo di dato, *pF = nome del puntatore al file.
     *  fopen("nome.estensione","modalità")
     *  modalità =  r (reading),
     *              r+ (reading/writing, se il file esiste),
     *              w (write, se il file esiste viene cancellato il contenuto),
     *              w+ (reading/writing, se il file esiste viene cancellato il contenuto),
     *              a (append, alla fine del file, se non esiste viene creato),
     *              a+ (append/legge, alla fine del file, se il file non esiste viene creato)
     */

    FILE *pF = fopen("C:\\Users\\Emanuel\\Desktop\\Esercizi_C\\042.1_test.txt", "w");  //  percorso assoluto con uno \ in più

    //  scrivo nel file aperto
    fprintf(pF, "\nHehe");  //  fprintf(NomeFile, "testo da scrivere")

    fclose(pF);  //  è buona pratica chiudere sempre un file aperto

    // per eliminare un file
    // if (remove("042.1_test.txt") == 0) {
    //     printf("\nIl file e' stato eliminato con successo.\n");
    // } else {
    //     printf("\nIl file non e' stato eliminato!\n");
    // }

    return EXIT_SUCCESS;
}