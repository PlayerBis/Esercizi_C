/**
 *  struct =    una collezione di membri (variabili) che possono contenere tipi
 *              differenti di dato, molto simili alle classi in altri
 *              linguaggi. (Senza metodi)
 */

#include <stdio.h>
#include <string.h>

#define EXIT_SUCCESS 0;

//  creo la struct
struct Player {  //  meglio usare la prima lettera maiuscola
    char name[15];
    int score;
};

int main() {
    //  creo due istanze della struct Player
    struct Player player1;
    struct Player player2;

    //  assegno dei valori alle variabili della struct
    strcpy(player1.name, "Emanuel");
    player1.score = 5;
    strcpy(player2.name, "Martina");
    player2.score = 8;

    // stampo le variabili della struct
    printf("\nCiao %s, il tuo score e' di: %d\n", player1.name, player1.score);
    printf("\nCiao %s, il tuo score e' di: %d\n", player2.name, player2.score);

    return EXIT_SUCCESS;
}