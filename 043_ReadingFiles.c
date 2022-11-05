/**
 *  Leggere un file in C
 */

#include <stdio.h>

#define EXIT_SUCCESS 0;

int main() {
    FILE *pF = fopen("C:\\Users\\Emanuel\\Desktop\\poema.txt", "r");  //  apro il file
    char buffer[255];

    if (pF == NULL) {  //  controlla se il file esiste
        printf("\nFile non trovato!\n");
    } else {
        while (fgets(buffer, 255, pF) != NULL) {  //  prende in input fino a quando non trova niente
            printf("%s", buffer);                 //  stampo dal buffer
        }
    }

    fclose(pF);  //  chiudo il file

    return EXIT_SUCCESS;
}