/**
 *  Prendi in input dei dati e stampali
 */

#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    int età;
    char nome[25];

    printf("\nCome ti chiami? ");
    //  Con le stringhe posso non usare l'indirizzo di memoria
    // scanf("%s", nome);
    fgets(nome, 25, stdin);  //  Prende anche gli spazi (variabile, dimensione, stdinputstream)

    printf("\nQuanti anni hai? ");
    scanf("%d", &età);

    printf("Ciao, %s\n", nome);
    printf("Tu hai %d anni.\n", età);

    return EXIT_SUCCESS;
}
